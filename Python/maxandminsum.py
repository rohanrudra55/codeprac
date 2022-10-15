#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Sat Feb  6 02:42:49 2021

@author: alpha
"""

n=input()
n=n.split(" ")
maxNum=0
minNum=0
maxSecNum=0
minSecNum=0
for i in range(0,len(n)):
    a=int(n[i])
    if(i==0):
        maxNum=a
        minNum=a
    else:
        maxNum=max(a,maxNum)
        minNum=min(a,minNum)
maxSecNum=minNum
minSecNum=maxNum
for i in range(0,len(n)):
    b=int(n[i])
    if(b < maxNum):
        maxSecNum=max(b,maxSecNum)
    if(b > minNum):
        minSecNum=min(b,minSecNum)
sum= maxSecNum+minSecNum
print(sum)
