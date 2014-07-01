#include<stdio.h>

typedef unsigned long int uli;

uli expn(uli n,int)

main()
{
int t;
unsigned long int n,k,p;

scanf("%d",&t);
while(t--)
{
scanf("%lu",&n);
k=expn(2,n/2);
if(k&1)
p=k*k;
else p=k*k/2;
p=p+k;

printf("%d",p);

}



}

