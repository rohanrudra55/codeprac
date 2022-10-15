#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Fri Feb  5 21:50:08 2021

@author: alpha
"""

n=input()
n=n.split(" ")
for i in range(0,len(n)):
    x=str(n[i])
    if x.endswith('4')==False:
        print(n[i],end=" ")
   # else:
    #     print(n[i],end=" ")


