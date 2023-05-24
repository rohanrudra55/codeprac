import cv2 as cv
cap=cv.VideoCapture(0)
def selectPoint(x,y,event):
    _,frame=cap.read()
    cv.imshow("Preview",frame)