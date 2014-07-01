#include<stdio.h>
typedef  unsigned long int uli;

//void expn(uli a[2][2],int n,uli p[2][2]);
//void mult(uli a[2][2],uli b[2][2],uli c[2][2]);
int I[][2]={{1,0},{0,1}};
main()
{
FILE *fp=fopen("fibbonaci.txt","w"); 
uli a[2][2]={{1,1},{1,0}};
uli p[2][2];
int n;
int i,j;
uli array[98]={0,0,1,1};
int co=3;
	fprintf(fp,"  1\t0\n  2\t1\n  3\t1\n");
	
	for(n=1;n<92;n++){
		//expn(a,n,p);
		co++;
		array[co]=array[co-1]+array[co-2];
                fprintf(fp,"%3d\t%lu\n",co,array[co]);
	}
	fclose(fp);
return 0;
}
/*
void mult(uli a[2][2],uli  b[2][2],uli p[2][2])
{
int i,j,k;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			p[i][j]=0;
			for(k=0;k<2;k++)	p[i][j]+=a[i][k]*b[k][j];
		}
	}
}
void expn(uli a[2][2], int n,uli p[2][2])
{
	if(n==0){
			p[0][0]=p[1][1]=1;p[0][1]=p[1][0]=0;return;}
	else if(n==1) { p[0][0]=a[0][0];p[1][0]=a[1][0];p[1][1]=a[1][1];p[0][1]=a[0][1];
			return;}
	int i,j,k;
        uli t[2][2];
	if((n & 1))
	{
		uli w[2][2];
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
*/
