#include<stdio.h>

void expn(int a[2][2],int n,int p[2][2]);
void mult(int a[2][2],int b[2][2],int c[2][2]);

int I[][2]={{1,0},{0,1}};
main()
{
int a[2][2],p[2][2];
int n;
int i,j;
	printf("enter matrix 2*2 for exponentiation\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)	scanf("%d",&a[i][j]);
	}
	printf("Exponent please\t");
	scanf("%d",&n);
	expn(a,n,p);
	for(i=0;i<2;i++)
	{	
		for(j=0;j<2;j++)	printf("%d\t",p[i][j]);
		printf("\n");
	}
}
void mult(int a[2][2],int b[2][2],int p[2][2])
{
int i,j,k;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			p[i][j]=0;
			for(k=0;k<2;k++)	p[i][j]+=a[i][k]*b[k][j];
		}
	}
}
void expn(int a[2][2],int n,int p[2][2])
{
	if(n==0){
			p[0][0]=p[1][1]=1;p[0][1]=p[1][0]=0;return;}
	else if(n==1) { p[0][0]=a[0][0];p[1][0]=a[1][0];p[1][1]=a[1][1];p[0][1]=a[0][1];
			return;}
	int i,j,k;
        int t[2][2];
	if((n & 1))
	{
		int w[2][2];
		expn(a,n/2,t);
		mult(t,t,w);
		mult(a,w,p);
	}
	else
	{
		expn(a,n/2,t);
		mult(t,t,p);
	}
}	
