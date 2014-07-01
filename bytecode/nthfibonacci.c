#include<stdio.h>
void expn(unsigned long int a[2][2],int n,unsigned long int p[2][2]);
void mult(unsigned long int a[2][2],unsigned long int b[2][2],unsigned long int c[2][2]);
main()
{
int n;
int i,j;
unsigned long int a[2][2]={{1,1},{1,0}};
unsigned long int p[2][2];
int t;
scanf("%d",&t);
while(t--)
{	
	
	scanf("%d",&n);
	if(n==0) {printf("0\n");continue;}
	if(n==2 || n==3){	printf("1\n"); continue;}
	if(n==1) {	printf("0\n");continue;}
	expn(a,n-3,p);
	printf("%lu\n",(p[0][0]+p[0][1]));
	
}
return 0;
}
void mult(unsigned long int a[2][2],unsigned long int b[2][2],unsigned long int p[2][2])
{
int i,j,k;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			p[i][j]=0;
			for(k=0;k<2;k++)	p[i][j]+=a[i][k]*b[k][j];
		}
	}
}
void expn(unsigned long int a[2][2], int n,unsigned long int p[2][2])
{

	 if(n==1) { 		p[0][0]=a[0][0];
				p[1][0]=a[1][0];	
				p[1][1]=a[1][1];							
				p[0][1]=a[0][1];
				return;}
	int i,j,k;
        unsigned long  int t[2][2];
	if((n & 1))
	{
		unsigned long int w[2][2];
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
