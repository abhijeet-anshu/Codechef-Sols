#include<stdio.h>
#include<stdlib.h>
void mg_sort(int [2000][3],int,int);

main()
{
int t ,n;
int i;
int a[2000][3];
scanf("%d",&t);
while(t--)
{
	scanf("%d",&n);
	for(i=0;i<n;i++){scanf("%d%d%d",a[i]+0,a[i]+1,a[i]+2);}
	//SORT
//	for(i=0;i<n;i++){printf("%d\t%d\t%d\n",a[i][0],a[i][1],a[i][2]);}
	mg_sort(a,0,n-1);
	for(i=0;i<n;i++){printf("%d\t%d\t%d\n",a[i][0],a[i][1],a[i][2]);}
}

}


void merge(int a[2000][3],int p,int q,int r){
	int la=q-p+1,lb=r-q;
	int i=0,j=0,k;
	int *x,*y;
	x= (int *)malloc(3*sizeof(int) * la);
	y= (int *)malloc(3*sizeof(int) * lb);
	for(k=p;k<=q;k++){
		x[i*3]=a[k][0];
		x[i*3+1]=a[k][1];
		x[i*3+2]=a[k][2];
		i++;
		}
	for(k=q+1;k<=r;k++) {
		y[j]=  a[k][0];
		y[j*3+1]=a[k][1];
		y[j*3+2]=a[k][2];
		j++;}
	i=j=0;
	for(k=p;k<=r;k++)
	{
		if(x[i*3+1]<=y[j*3+1])
		{
			a[k][0]=x[i*3];
			a[k][1]=x[i*3+1];
			a[k][2]=x[i*3+2];
			i++;
		}
		else
		{
			a[k][0]=y[j*3];
			a[k][1]=y[j*3+1];
			a[k][2]=y[j*3+2];
                        j++;
		}
	}
	free(x);
	free(y);
}	
void mg_sort(int a[2000][3],int p,int r)
{
	int q;
	if(p<r)
	{
		q= (p+r)/2;
		mg_sort(a,p,q);
		mg_sort(a,q+1,r);
		merge(a,p,q,r);
	}

}


			
