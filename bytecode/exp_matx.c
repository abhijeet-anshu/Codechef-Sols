#include<stdio.h>

main()
{
int x,n;
scanf("%d",&n);
int pow;



//printf("%d\n",getpow(x,n));


int a[2][2],c[2][2];
        int i,j,k;
        int s;
        //int *p;
        //p=a[0];
        for(i=0;i<2;i++)
        {
                for(j=0;j<2;j++)                scanf("%d",&a[i][j]);
        printf("\n");
       }

int** sqr_mat(int **a,int **b)
{

int p[2][2];
p[0][0]=a[0][0]*b[0][0]+a[0][1]*b[1][0];
p[0][1]=a[0][0]*b[1][0]+a[0][1]*b[1][1];
p[1][0]=a[1][0]*b[0][0]+a[1][1]*b[1][0];
p[1][1]=a[1][0]*b[1][0]+a[1][1]*b[1][1];
return p;
}


for(i=0;i<2;i++)
        {
        for(j=0;j<2;j++)
        {
                c[i][j]=0;
                for(k=0;k<2;k++)
                c[i][j]=c[i][j]+(a[i][k]*b[k][j]);

        }
       
 }
}

int** getpow(int x[2][2],int n)
{
int **a;
if(n==0) return I();
if(n==1) return x;
        if(n%2==0)// for even n
        {
                a=getpow(x,n/2);
                return sqr_mat(a,a);
        }
        else
        {
		int k[2][2];
		int i,j;
                a=getpow(x,(n-1)/2);// for odd n
		k=sqr_mat(a,a);
		k=sqr_mat(a,k);
                return k;
        }
}

