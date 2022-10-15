#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Mon Feb  8 19:33:57 2021

@author: alpha
"""

m=int(input())
n=int(input())
i=2
c=1
while(i < m):
    if(m%i==0 and n%i==0):
        c=i*c
        m=m/i
        n=n/i
    else:
        i=i+1
        
print(c)