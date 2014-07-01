#include<stdio.h>
#include<stdlib.h>
main()
{
unsigned int i;
int t,n,m;
int j;
int sum;
int *arr;
int flag;
scanf("%d",&t);
while(t--)
{	
	flag=0;
	scanf("%d%d",&n,&m);
	arr=(int *)malloc(n*sizeof(int));
	for(j=0;j<n;j++)	scanf("%d",arr+j);
	for(i=1;i<=1<<n;i++)
	{	
		flag =0;
		sum=0;
	
	for(j=0;j<n;j++)
		{
			if((i & 1<<j) >0)
				sum+=arr[j];
		}
		if(sum == m){ flag=1; break;}
		else continue;
	}
	if(flag)
		printf("Yes\n");
	else 
		printf("No\n");
}
return 0;
}
