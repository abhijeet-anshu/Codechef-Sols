#include<stdio.h>

//unsigned long int uli;

unsigned long int getpow(unsigned long int x,int n)
{
unsigned long int a;
if(n==0) return 1;
if(n==1) return x;
        if(n%2==0)// for even n
        {
                a=getpow(x,n/2);
//		printf("%lu\n",a);
                return a*a%1000000007;
        }
        else
        {
                a=getpow(x,(n-1)/2);// for odd n
//		printf("%lu\n",a);
                return a*a*x%1000000007;
        }
}

int main()
{
unsigned long int res,tmp,n;
int t;
scanf("%d",&t);
	while(t--)
	{
		scanf("%lu",&n);
		tmp=getpow(2,n/2);
		res=tmp*tmp;
//		printf("\n%lu\n\n",res);
		if(n&1) res=res+tmp;
		else res=res/2+tmp;
		res=res%1000000007;
		printf("%lu\n",res);
	}
return 0;
}


