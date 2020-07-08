# -*- coding: utf-8 -*-
"""
Created on Wed Jul  8 17:13:06 2020

@author: USER1
"""

filein = open("piratein.txt","r")
list1 = []
for i in range(3):
    list1.append(int(filein.readline()))
filein.close()
fileout = open("pirateout.txt","w")
fileout.write(str(min(list1[1] + list1[2], list1[0] - list1[1] + list1[0] - list1[2])))
