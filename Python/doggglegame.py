#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Mon Feb  8 21:50:23 2021

@author: alpha
"""
import string
import random
elements=list(string.ascii_letters)
card1=[0]*10
card2=[0]*10
pos1=random.randint(0, 9)
pos2=random.randint(0, 9)
if(pos1==pos2):
    pos2=random.randint(0,9)
same=random.choice(elements)
elements.remove(same)
i=0
card1[pos1]=same
card2[pos2]=same
while(i<10):
    if(i!=pos1):
        card1[i]=random.choice(elements)
        elements.remove(card1[i])
    if(i!=pos2):
        card2[i]=random.choice(elements)
        elements.remove(card2[i])
    i+=1
#print(card1,"\n")    
for j in card1:
    print(j,end=' ')
print()
for j in card2:
    print(j,end=' ')

answer=input("Same element is: ")
if(answer==same):
    print("Correct!")
else:
    print("Answer is '",same,"'. Better luck next time")