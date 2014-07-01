#!/usr/bin/python -tt 
t=int(raw_input())
while(t>0):
	t=t-1
	string=raw_input()
	l=len(string)
	acount=0
	ans=0
	bcount=0
	flag=True
	for i in range(0,l):
		if(string[i]=='>'):
			bcount=bcount+1
		elif(string[i]=='<'):
			acount=acount+1
		if(bcount>acount):
			break
		elif(acount==bcount):
			ans=i+1
	print ans	
