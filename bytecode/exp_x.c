#include<stdio.h>

main()
{
int x,n;
scanf("%d%d",&x,&n);
int pow;

printf("%d\n",getpow(x,n));
}

int getpow(int x,int n)
{
int a;
if(n==0) return 1;
if(n==1) return x;
	if(n%2==0)// for even n
	{
		a=getpow(x,n/2);
		return a*a;
	}
	else
	{
		a=getpow(x,(n-1)/2);// for odd n
		return a*a*x;	
	}
}
