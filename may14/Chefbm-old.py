#!/usr/bin/python -tt 
str=(raw_input()) 
str=str.split()
n=int(str[0])
m=int(str[1])
p=int(str[2])
arr=[]
for i in range(p):
	str=(raw_input())
	str=(str.split())
#	str=tuple(str)
	str[0]=int(str[0])-1
	str[1]=-int(str[1])+1
	str=tuple(str)
	arr.append(str)
arr=sorted(arr)
print arr
marktuple=0
markrow=0
#lentuple=len(arr)
flag=True
M=m-1
for i in range(n): #  for each row
	ans=M
	while(marktuple<p and arr[marktuple][0]<i):
		marktuple=marktuple+1
	if(marktuple==p):
		print ans
		continue
	if(arr[marktuple][0]>i):
		print ans
		continue
	prev_col=-1
	prev_val=-1
	while(arr[marktuple][0]==i):	#tuple with rows i+1
		col=-arr[marktuple][1]
		j=marktuple+1
		print "in ",i ,col," th row and column "
		while(j<p and arr[marktuple]==arr[j]):
			j=j+1 # just to count the number of increments :)
		newval=(j-marktuple)+arr[marktuple][1] #making the increment happen
		if(prev_col==col+1): # means there were changes in just  the previous column if not then this passes simply
			if(prev_val>=newval):
				ans=ans-1+prev_val-newval
			elif(prev_val<newval):# don't loop for the row any further we are done since one cannot cross the road
				ans= -1
				break
			#	elif()
		else:
			if(newval <= col+1):
				ans=ans+col-newval
			else:
				ans=-1
				break
				#ans=ans-1+col+1-newval
			
		prev_val=newval
		prev_col=col
		marktuple=j
	print ans

