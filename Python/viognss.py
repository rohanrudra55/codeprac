import cv2 as cv
import numpy as np
import matplotlib.pyplot as plt
#import open3d as o3d
import glob
import math
from droiddekka.simplekalman.kalmanfilter import simplekalmanfilter as KF
from gps_utils import GPS_utils


def create_output(vertices, colors, filename):
	colors = colors.reshape(-1,3)
	vertices = np.hstack([vertices.reshape(-1,3),colors])

	ply_header = '''ply
		format ascii 1.0
		element vertex %(vert_num)d
		property float x
		property float y
		property float z
		property uchar red
		property uchar green
		property uchar blue
		end_header
		'''
	with open(filename, 'w') as f:
		f.write(ply_header %dict(vert_num=len(vertices)))
		np.savetxt(f,vertices,'%f %f %f %d %d %d')


def calibrations(calib_file=None):
    with open(calib_file) as f:
        data = f.read()
    data = data.split('\n')
    data = [x.split(' ') for x in data]
    data = [x for x in data if x != ['']]
    data_dict = dict()
    for i in data[2:]:
        data_dict[i[0]] = [float(x) for x in i[1:]]
    return data_dict


def disparity(left_img=None, right_img=None, block_size=15, max_disp=96, min_disp=16):
    numd = max_disp - min_disp
    stereo = cv.StereoBM_create(numDisparities=numd, blockSize=block_size)
    disparity = stereo.compute(left_img, right_img, )
    #plt.imshow(disparity, 'gray')
    #plt.show()
    return ( disparity.astype(np.float32) / 16.0)    

'''
    S_xx: 1x2 size of image xx before rectification
    K_xx: 3x3 calibration matrix of camera xx before rectification
    D_xx: 1x5 distortion vector of camera xx before rectification
    R_xx: 3x3 rotation matrix of camera xx (extrinsic)
    T_xx: 3x1 translation vector of camera xx (extrinsic)
    S_rect_xx: 1x2 size of image xx after rectification
    R_rect_xx: 3x3 rectifying rotation to make image planes co-planar
    P_rect_xx: 3x4 projection matrix after rectification
'''

def getImageSizeBeforeRectification(calib_file=None,camera_id=0):
    data = calibrations(calib_file)
    data = data['S_0' + str(camera_id) + ':']
    data = np.array(data)
    data = data.astype(np.int)
    return data

def getCalibrationMatrixBeforeRectification(calib_file=None,camera_id=0):
    data = calibrations(calib_file)
    data = data['K_0' + str(camera_id) + ':']
    data = np.array(data)
    data = data.reshape(3,3)
    return data

def getDistortionVectorBeforeRectification(calib_file=None,camera_id=0):
    data = calibrations(calib_file)
    data = data['D_0' + str(camera_id) + ':']
    data = np.array(data)
    return data

def getRotationMatrixExtrinsic(calib_file=None,camera_id=0):
    data = calibrations(calib_file)
    data = data['R_0' + str(camera_id) + ':']
    data = np.array(data)
    data = data.reshape(3,3)
    return data


def getTranslationVectorExtrinsic(calib_file=None,camera_id=0):
    data = calibrations(calib_file)
    data = data['T_0' + str(camera_id) + ':']
    data = np.array(data)
    data = data.reshape(3,1)
    return data

def getImageSizeAfterRectification(calib_file=None,camera_id=0):
    data = calibrations(calib_file)
    data = data['S_rect_0' + str(camera_id) + ':']
    data = np.array(data)
    data = data.astype(np.int)
    return data

def getRectifyingRotationMatrix(calib_file=None,camera_id=0):
    data = calibrations(calib_file)
    data = data['R_rect_0' + str(camera_id) + ':']
    data = np.array(data)
    data = data.reshape(3,3)
    return data    

def getProjectionMatrixAfterRectification(calib_file=None,camera_id=0):
    data = calibrations(calib_file)
    data = data['P_rect_0' + str(camera_id) + ':']
    data = np.array(data)
    data = data.reshape(3,4)
    return data

def rectifyImage(image,calib_file=None,camera_id=0):
    image_size = getImageSizeBeforeRectification(calib_file,camera_id)
    K = getCalibrationMatrixBeforeRectification(calib_file,camera_id)
    D = getDistortionVectorBeforeRectification(calib_file,camera_id)
    R = getRotationMatrixExtrinsic(calib_file,camera_id)
    T = getTranslationVectorExtrinsic(calib_file,camera_id)
    P_rect = getProjectionMatrixAfterRectification(calib_file,camera_id)
    map1, map2 = cv.initUndistortRectifyMap(K, D, R, P_rect, image_size, cv.CV_32FC1)
    rectified_image = cv.remap(image, map1, map2, interpolation=cv.INTER_LINEAR)
    return rectified_image

def depthmap(disparity=None,Q=None):
    depth = cv.reprojectImageTo3D(disparity, Q)
    depth = depth.astype(np.float32)
    return depth

def display(image=None,tag="Image"):
    cv.imwrite(tag + ".png",image)
    return True


def visualise2D(image,keypoints1,keypoints2,both=False):
    radius = 2
    visualize=cv.cvtColor(image,cv.COLOR_GRAY2BGR,3)
    for point in keypoints1:
        cv.circle(visualize,(int(point[0]),int(point[1])),radius=2,color=(0,255,0))
    if both:
        for point in keypoints2:
            cv.circle(visualize,(int(point[0]),int(point[1])),radius=2,color=(0,0,255))
    return visualize

def visualize_trajectory_2d(xpose,ypose,markx,marky,path_name="trajectory",show_ori=False):
    fig,ax = plt.subplots(figsize=(5,5))
    n_pose = len(xpose)
    ax.plot(xpose,ypose,'r-',label=path_name) # pose[0,3,:] -> x , pose[1,3,:] -> y
    ax.scatter(xpose[0],ypose[0],marker='s',label="start")
    ax.scatter(xpose[-1],ypose[-1],marker='o',label="end")
    
    # plot landmarks
    ax.scatter(markx, marky, 1, label="landmarks")
    
    ax.set_xlabel('x')
    ax.set_ylabel('y')
    ax.axis('equal')
    ax.grid(False)
    ax.legend()
    #plt.show(block=True)
    plt.savefig('trajectory.jpg', fig)
    return fig, ax




def trackFeatures(currentLeft,currentRight,previousLeft,previousRight,prvLPt):
    lk_params = dict( winSize = (21, 21),maxLevel = 3,
                  criteria = (cv.TERM_CRITERIA_EPS | cv.TERM_CRITERIA_COUNT,30, 0.01))
    # prvLPt=limitFeatures(prvLPt)
    prvRPt,prvRst,err0 = cv.calcOpticalFlowPyrLK(previousLeft,previousRight,prvLPt,None,**lk_params)
    curRPt,curRst,err1 = cv.calcOpticalFlowPyrLK(previousRight,currentRight,prvRPt,None,**lk_params)
    curLPt,curLst,err2 = cv.calcOpticalFlowPyrLK(currentRight,currentLeft,curRPt,None,**lk_params)
    prvNLPt,prvNLst,err3 = cv.calcOpticalFlowPyrLK(currentLeft,previousLeft,curLPt,None,**lk_params)
    indexError = 0
    totalPoints = list(prvNLst.shape)[0]
    for size_ in range(totalPoints):

        pt0 = prvLPt[size_ - indexError]
        pt1 = prvRPt[size_ - indexError]
        pt2 = curLPt[size_ - indexError]
        pt3 = curRPt[size_ - indexError]
        pt4 = prvNLPt[size_ - indexError]

        outsideFrame = ((pt0[0]<0 or pt1[0]<0 or pt2[0]<0 or pt3[0]<0 or pt4[0]<0) or 
                            (pt0[1]<0 or pt1[1]<0 or pt2[1]<0 or pt3[1]<0 or pt4[1]<0))
        badstatus = (prvRst[size_]==0 or prvNLst[size_]==0 or curLst[size_]==0 or curRst[size_]==0)
        NoStereo = ((abs(pt0[1]-pt1[1])>3) or (abs(pt2[1]-pt3[1])>3))

        if(outsideFrame or badstatus or NoStereo):
            rmIndex=size_-indexError
            indexError+=1
            prvLPt=np.delete(prvLPt,rmIndex,axis=0)
            prvRPt=np.delete(prvRPt,rmIndex,axis=0)
            curLPt=np.delete(curLPt,rmIndex,axis=0)
            curRPt=np.delete(curRPt,rmIndex,axis=0)
            prvNLPt=np.delete(prvNLPt,rmIndex,axis=0)
    visimg= visualise2D(currentLeft,prvLPt,curLPt,True)
    display(visimg,"Features")
    # print(len(prvRPt),len(curRPt),len(curLPt),indexError)
    return prvLPt,prvRPt,curLPt,curRPt


def detectFeatures(image):
    fast = cv.FastFeatureDetector_create()
    fast.setThreshold(80)
    keypoint = fast.detect(image,None)
    points = cv.KeyPoint_convert(keypoint)
    return points


def limitFeatures(features):
    total=len(features)
    if total >1500:
        features=features[:1500]
    # print("Reduced features form",total,"to","less than 1000")
    return features


def isRotationMatrix(R) :
    Rt = np.transpose(R)
    shouldBeIdentity = np.dot(Rt, R)
    I = np.identity(3, dtype = R.dtype)
    n = np.linalg.norm(I - shouldBeIdentity)
    return n < 1e-6

def rotationMatrixToEulerAngles(R) :
    assert(isRotationMatrix(R))
    sy = math.sqrt(R[0,0] * R[0,0] +  R[1,0] * R[1,0])
    singular = sy < 1e-6
    if  not singular :
        x = math.atan2(R[2,1] , R[2,2])
        y = math.atan2(-R[2,0], sy)
        z = math.atan2(R[1,0], R[0,0])
    else :
        x = math.atan2(-R[1,2], R[1,1])
        y = math.atan2(-R[2,0], sy)
        z = 0

    return np.array([x, y, z])




def estimatePose(prvLImg,prvRImg,curLImg,curRImg,prvLPt,oldFramepose,trajectory):


    # projMatL=np.array([[718.856, 0, 607.193,0],[0, 718.856,185.216, 0],[0,0, 1, 0]])
    # projMatR=np.array([[718.856, 0, 607.193,-386.02567],[0, 718.856,185.216, 0],[0,0, 1, 0]])

    #projMatL=np.array([[1403.11, 0.0, 1000.3, 0.0], 
    #                    [0.0, 1403.11, 549.43, 0.0], 
    #                    [0.0, 0.0, 1.0, 0.0]])
    #projMatR=np.array([[1401.92, 0.0, 1005.05, -168.37], 
    #                    [0.0, 1401.92, 620.36, 0.0], 
    #                    [0.0, 0.0, 1.0, 0.0]])

    projMatL = getProjectionMatrixAfterRectification(calib,0)
    projMatR = getProjectionMatrixAfterRectification(calib,1)

    insMat=np.array([[projMatL[0, 0], projMatL[0, 1], projMatL[0, 2]], 
                        [projMatL[1, 0], projMatL[1, 1], projMatL[1, 2]],
                        [projMatL[2, 0], projMatL[2, 1], projMatL[2, 2]]])
    displayScale=1
    xPadding=400
    yPadding=200
    rotation = np.zeros(shape=(3,3))
    translation = np.zeros(shape=(3,1))
    distCoeffs = np.zeros(shape=(4,1))
    rvec = np.zeros(shape=(3,1))
    inliers=0
    inlierRate=0.01
    sucess=False
    newFramepose=oldFramepose
    x=0
    z=0
   
    prvLPt,prvRPt,curLPt,curRPt=trackFeatures(curLImg,curRImg,prvLImg,prvRImg,prvLPt)
    # print(len(prvRPt))
    points4D=cv.triangulatePoints(projMatL,projMatR,prvLPt.transpose(),prvRPt.transpose())
    points3D=cv.convertPointsFromHomogeneous(points4D.transpose())
    # print(points3D)
    # exit(0)
    sucess,rvec,tvec,inliers= cv.solvePnPRansac(points3D,curLPt,insMat,distCoeffs,
                        useExtrinsicGuess=True,
                        iterationsCount=500,
                        reprojectionError=0.5,
                        confidence=0.99,
                        flags=cv.SOLVEPNP_ITERATIVE)
    if sucess:
        rotation,jac=cv.Rodrigues(rvec)
        rotationInEuler=rotationMatrixToEulerAngles(rotation)

        if(abs(rotationInEuler[0])<0.1 and abs(rotationInEuler[1])<0.1 and abs(rotationInEuler[2])<0.1):
            poseNormalize=(pow(tvec[0],2) + pow(tvec[1],2) + pow(tvec[2],2))
            if (poseNormalize < 100 and poseNormalize > 0.0005*0.0005):
                rigidBodyTrans=np.linalg.inv(np.vstack((np.hstack((rotation,tvec)),np.array([0,0,0,1]))))
                newFramepose=np.matmul(oldFramepose,rigidBodyTrans)
                x=int(newFramepose[0][3])+xPadding
                z=int(newFramepose[2][3])+yPadding
                # print(CYAN.format('X: '),x,CYAN.format(' Y: '),z)
            else:
                return newFramepose,trajectory,None,None,False
        else:
            return newFramepose,trajectory,None,None,False
    else:
        return newFramepose,trajectory,None,None,False
    
    if (len(inliers)/list(curLPt.shape)[0] < inlierRate):
        return newFramepose,trajectory,None,None,False
    else:
        cv.circle(trajectory,center=(x,z),radius=1,color=(0,0,255),thickness=1,lineType=cv.LINE_4)

    return newFramepose,trajectory,x,z,sucess


def imuCalib(calib_file=None):
    if calib_file is None:
        calib_file = './calib_imu.txt'
    with open(calib_file, 'r') as f:
        lines = f.readlines()
    lines = [line.strip() for line in lines]
    lines = [line for line in lines if len(line) > 0]
    z = []
    for i in lines:
        z.append(i.split(' '))
    data = dict()
    for i in z[1:]:
        data[i[0]] = [float(x) for x in i[1:]]
    return data

'''
lat:   latitude of the oxts-unit (deg)
lon:   longitude of the oxts-unit (deg)
alt:   altitude of the oxts-unit (m)
roll:  roll angle (rad),    0 = level, positive = left side up,      range: -pi   .. +pi
pitch: pitch angle (rad),   0 = level, positive = front down,        range: -pi/2 .. +pi/2
yaw:   heading (rad),       0 = east,  positive = counter clockwise, range: -pi   .. +pi
vn:    velocity towards north (m/s)
ve:    velocity towards east (m/s)
vf:    forward velocity, i.e. parallel to earth-surface (m/s)
vl:    leftward velocity, i.e. parallel to earth-surface (m/s)
vu:    upward velocity, i.e. perpendicular to earth-surface (m/s)
ax:    acceleration in x, i.e. in direction of vehicle front (m/s^2)
ay:    acceleration in y, i.e. in direction of vehicle left (m/s^2)
az:    acceleration in z, i.e. in direction of vehicle top (m/s^2)
af:    forward acceleration (m/s^2)
al:    leftward acceleration (m/s^2)
au:    upward acceleration (m/s^2)
wx:    angular rate around x (rad/s)
wy:    angular rate around y (rad/s)
wz:    angular rate around z (rad/s)
wf:    angular rate around forward axis (rad/s)
wl:    angular rate around leftward axis (rad/s)
wu:    angular rate around upward axis (rad/s)
pos_accuracy:  velocity accuracy (north/east in m)
vel_accuracy:  velocity accuracy (north/east in m/s)
navstat:       navigation status (see navstat_to_string)
numsats:       number of satellites tracked by primary GPS receiver
posmode:       position mode of primary GPS receiver (see gps_mode_to_string)
velmode:       velocity mode of primary GPS receiver (see gps_mode_to_string)
orimode:       orientation mode of primary GPS receiver (see gps_mode_to_string)

'''
def squared_loss(a,b):
    if a > b:
        x = math.sqrt( (a**2) - (b ** 2))
        return x
    x = math.sqrt( (b**2) - (a ** 2))
    return x




def read_oxts(file_path = None):
    with open(file_path, 'r') as f:
        lines = f.readlines()
    lines = [line.strip() for line in lines]
    lines = [x.split(' ') for x in lines]
    lines = lines[0]
    lines = [float(x) for x in lines]
    print(f"LINES : {lines}")
    oxts = dict()
    oxts['lat'] = lines[0]
    oxts['lon'] = lines[1]
    oxts['alt'] = lines[2]
    oxts['roll'] = lines[3]
    oxts['pitch'] = lines[4]
    oxts['yaw'] = lines[5]
    oxts['vn'] = lines[6]
    oxts['ve'] = lines[7]
    oxts['vf'] = lines[8]
    oxts['vl'] = lines[9]
    oxts['vu'] = lines[10]
    oxts['ax'] = lines[11]
    oxts['ay'] = lines[12]
    oxts['az'] = lines[13]
    oxts['af'] = lines[14]
    oxts['al'] = lines[15]
    oxts['au'] = lines[16]
    oxts['wx'] = lines[17]
    oxts['wy'] = lines[18]
    oxts['wz'] = lines[19]
    oxts['wf'] = lines[20]
    oxts['wl'] = lines[21]
    oxts['wu'] = lines[22]
    oxts['pos_accuracy'] = lines[23]
    oxts['vel_accuracy'] = lines[24]
    oxts['navstat'] = lines[25]
    oxts['numsats'] = lines[26]
    oxts['posmode'] = lines[27]
    oxts['velmode'] = lines[28]
    oxts['orimode'] = lines[29]

    return oxts
    #return lines


#print(imuCalib("/home/arkaprabha/viognss/2011_09_26/calib_imu_to_velo.txt"))
#print(read_oxts("2011_09_26_drive_0002_sync/oxts/data/0000000000.txt"))
#exit(0)








#driver code for viognss or slam
calib = '/Users/alpha/Downloads/dataset2/calib_cam_to_cam.txt'

r = calibrations('/Users/alpha/Downloads/dataset2/calib_cam_to_cam.txt')

#print(getCalibrationMatrixBeforeRectification('/home/arkaprabha/viognss/2011_09_26/calib_cam_to_cam.txt',1))

left_files = sorted(glob.glob('/Users/alpha/Downloads/dataset2/sync/image_00/data/*.png'))
right_files = sorted(glob.glob('/Users/alpha/Downloads/dataset2/sync/image_01/data/*.png'))
oxts = sorted(glob.glob('/Users/alpha/Downloads/dataset2/sync/oxts/data/*.txt'))
print(left_files)

initial = True
previousLeftImage=None
previousRightImage=None
previousLeftPt=None

framepose=np.identity(4,dtype=np.double)
trajectory=np.zeros((600,1200,3),dtype=np.uint8)

kf = KF(4,2)
gpkf = KF(4,2)
gps_obj = GPS_utils()

for i in range(len(left_files)):
    left_image = cv.imread(left_files[i],0)
    right_image = cv.imread(right_files[i],0)
    disp = disparity(left_image,right_image,17,128,16)
    cv.imwrite('disparity/disparity' +str(i)+ '.png',disp)
    h, w = left_image.shape[:2]
    f = 0.8 * w  # guess for focal length
    Q = np.float32([[1, 0, 0, -0.5 * w],
                [0, -1, 0, 0.5 * h],  # turn points 180 deg around x-axis,
                [0, 0, 0, -f],  # so that y-axis looks up
                [0, 0, 1, 0]])
    depth = depthmap(disp,Q)
    #print(depth)
    colors = cv.cvtColor(left_image, cv.COLOR_BGR2RGB)
    output_file = 'pcds/reconstructed' +str(i)+ '.ply' 
    print ("\n Creating the output file... \n")
    create_output(depth, colors, output_file)
    left_points = detectFeatures(left_image)
    
    imu_gps_oxts = read_oxts(oxts[i])
    lat = imu_gps_oxts['lat']
    lon = imu_gps_oxts['lon']
    alt = imu_gps_oxts['alt']
    
    vn = imu_gps_oxts['vn']
    ve = imu_gps_oxts['ve']
    ax = imu_gps_oxts['ax']
    ay = imu_gps_oxts['ay']

    vf = imu_gps_oxts['vf']
    vl = imu_gps_oxts['vl']
    af = imu_gps_oxts['af']
    al = imu_gps_oxts['al']
    
    #remians unused
    wx = imu_gps_oxts['wx']
    wy = imu_gps_oxts['wy']

    net_a = math.sqrt(((af**2) + (al**2))/2)           #controversial
    net_a_coords = math.sqrt(((ax**2) + (ay**2))/2)    #controversial
    
    if not initial:
        framepose, trajectory, x,y, show = estimatePose(previousLeftImage,previousRightImage,
                                                    left_image,right_image,
                                                    previousLeftPt,framepose,trajectory)
        if not show:
            break

        X_p,P_p = kf.predict()
        #draw on trajectory image
        cv.circle(trajectory,center=(int(X_p[0]),int(X_p[1])),radius=1,color=(255,0,0),thickness=1,lineType=cv.LINE_4)

        print(f"PREDICTION SQUARED DIFFERNCE X:{squared_loss(int(X_p[0]),x)}")
        print(f"PREDICTION SQUARED DIFFERNCE Y:{squared_loss(int(X_p[1]),y)}")
        X_u = kf.update(Xm = np.array([x,y]).reshape(2,1)) 
        kf.state_process_setter(X=X_u,dt=0.095,transition_vector=net_a)
        #draw on trajectory image
        cv.circle(trajectory,center=(int(X_u[0]),int(X_u[1])),radius=1,color=(0,255,0),thickness=1,lineType=cv.LINE_4)
        
        X_gp, P_gp = gpkf.predict()
        #draw on trajetory image :)
        cv.circle(trajectory,center=((int(X_gp[0])+400),(int(X_gp[1])+200)),radius=1,color=(40,200,100),thickness=1,lineType=cv.LINE_4)
        
        gpsx,gpsy,gpsz = gps_obj.geo2enu(lat,lon,alt)


        print(f"GPS X AND Y :{x} {y}")
        X_gu = gpkf.update(Xm=np.array([gpsx,gpsy]).reshape(2,1))
        #draw on trajectory image cuz :)
        cv.circle(trajectory,center=((int(X_gu[0])+400),(int(X_gu[1]) + 200)),radius=1,color=(40,100,200),thickness=1,lineType=cv.LINE_4)
        
        gpkf.state_process_setter(X=X_gu,dt=0.095,transition_vector=net_a_coords)



        if show and not display(trajectory):
            break
    else:
        initial = False
        kf.state_process_setter(X=np.array([0.0,0.0,vf,vl]),dt=0.095,transition_vector=net_a)
        gps_obj.setENUorigin(lat,lon,alt)
        x,y,z = gps_obj.geo2enu(lat,lon,alt)
        gpkf.state_process_setter(X=np.array([x,y,vn,ve]),dt=0.095,transition_vector=net_a_coords)
        


    
    previousLeftImage=left_image
    previousRightImage=right_image
    previousLeftPt=left_points