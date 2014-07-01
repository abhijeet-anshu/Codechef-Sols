#include<stdio.h>

int main()
{

	int t,arr[1000001]={0};
	scanf("%d",&t);
	int n,m;
	int max=0;
	while(t--)
	{
		scanf("%d",&m);
		arr[m]++;
		if(max<m)
			max=m;
	}
	for(n=0;n<=max;n++)
	{
		while(arr[n]--)
		{
			printf("%d\n",n);
		}
	}
return 0;
}
