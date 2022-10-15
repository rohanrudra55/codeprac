#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Sat Feb  6 21:21:42 2021

@author: alpha
"""
import random
import datetime
birthday=[]
i=0

while(i<50):
    month=0
    day=0
    year = random.randint(1857,2020)
#Leap Year check
    leap=0
    if(year%4==0 and year%100 != 0 or year%400==0):
        leap=1
    month=random.randint(1,12)
    if(month==2):
        day=random.randint(1,28+leap)
    elif((7-month)%2==0 and month<8):
        day=random.randint(1,31)
    elif(month%2==0):
        day=random.randint(1,31)
    else:
        day=random.randint(1,30)
    dd=datetime.date(year, month, day)
    day_of_year=dd.timetuple().tm_yday
    birthday.append(day_of_year)
    i=i+1
i=0
while(i,50):
    print(birthday[i])
    i=i+1


    

