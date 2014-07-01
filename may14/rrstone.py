#!/usr/bin/python -tt 
str=raw_input()
st=str.split()
n=int(st[0])
k=int(st[1])
str=raw_input()
st=str.split()
arr=[]
arr1=[]
arr2=[]
M=-2000000001
m=2000000001
for i in range(n):
	b=int(st[i])
	arr.append(b)
	if(M<b):
		M=b
	if(m>b):
		m=b
b2=M-m

def printA(L):
	for i in L:
		print i,
	return 0
for i in range(n):
	a1=M-arr[i]
	a2=b2-a1
	arr1.append(a1)
	arr2.append(a2)

if k==0:
	printA(arr)
elif (k&1)==1:
	printA(arr1)
else:
	printA(arr2)


