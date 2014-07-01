#include<stdio.h>

 int i,k,m,n;

int ispallin()
{
	k=n;
	m=0;
	while(k)
	{
		m=m*10+k%10;
		k=k/10;
	}
	if(m==n)	return 1;
	return 0;
}

int isprime()
{

for(i=2;i<=n/2;i++)
{
	if(n%i==0)	return 0;
}
return 1;
}

main()
{
FILE *fp;
fp=fopen("op.c","w");
int co=-1;

n=1;
for(;co<120;n++)
{
	if(ispallin())
	{	
		if(isprime())	{co++;fprintf(fp,"array[%d]=%d;\n",co,n);
				printf("%d\t%d\n",co,n);	}
	}
}
fclose(fp);
return 0;
}
