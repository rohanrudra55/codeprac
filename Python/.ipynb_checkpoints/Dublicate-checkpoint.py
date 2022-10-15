#PROCESS 1
n=int(input())
x=input()
arr=x.split(" ")
arr=arr[:n]
for i in arr:
    pos=-1
    c=0
    for j in arr:
        pos=pos+1
        if(i==j):
           # print("i:",i,"j:",j)
            c=c+1
           # print("c:",c)

        if(c>1):
            #print("i:",i,"j:",j)
            x=arr.pop(pos)
            #print("x:",x,"pos:",pos)
            pos=pos-1
            c=c-1
           # print("arr:",arr,"pos:",pos)

            
print(arr)      


#PROCESS 2
test_list = [1, 3, 5, 6, 3, 5, 6, 1] 
print ("The original list is : " +  str(test_list)) 
  
# using naive method 
# to remove duplicated  
# from list  
res = [] 
for i in test_list: 
    if i not in res: 
        res.append(i) 
  
# printing list after removal  
print ("The list after removing duplicates : " + str(res))