#!/usr/bin/python
t=int(raw_input() )
for x in range(t):
	n=int(raw_input())
	ans=0
	for i in range(1,n):
		a=i*(n-i)-1
		root=0
		while(root*root <a):
			root=root+1
		for j in range (1, root):
			ans=ans+a/j
		div=a/root
		start=root
		while(div!=0):
			end=a/div
			ans=ans+div*(end-start+1)
			start=end+1
			div=a/start
	print ans
			



