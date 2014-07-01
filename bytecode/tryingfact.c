#include<stdio.h>
void expn(unsigned long int a[2][2],int n,unsigned long int p[2][2]);
void mult(unsigned long int a[2][2],unsigned long int b[2][2],unsigned long int c[2][2]);
int I[][2]={{1,0},{0,1}};
main()
{
FILE *fp=fopen("fiboonaci.txt","w"); 
unsigned long int a[2][2]={{1,1},{1,0}};
unsigned long int p[2][2];
int n;
int i,j;
int co=2;
	fprintf(fp,"  1\t0\n  2\t1\n");
	for(n=1;n<300;n++){
		co++;
                fprintf(fp,"%3d\t%lu\n",co,p[0][0]);

		expn(a,n,p);
//		co++;
//		fprintf(fp,"%3d\t%lu\n",co,p[0][0]);
	}
	fclose(fp);
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
	if(n==0){
			p[0][0]=p[1][1]=1;p[0][1]=p[1][0]=0;return;}
	else if(n==1) { p[0][0]=a[0][0];p[1][0]=a[1][0];p[1][1]=a[1][1];p[0][1]=a[0][1];
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
