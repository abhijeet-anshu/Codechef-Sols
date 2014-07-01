/*
1	findelt(r,A)
2		Partition A int o n/5 groups 
3		Obtain n/5 medians into B
4		X=findelt(n/10,B) // approximate median
5		Partition A into Al and Ar
6			Al={x:x belongs to A and x < X}
7			Ar={x:x belongs to A and x > X}
8		if(|Al|=r-1)
9			return X
10		else if(|Al|>r-1)median exists in left
11			return findelt(r,Al)
12		else
13			return findelt(r-|Al|-1,Ar)

Test for 1 2 3  5 5 5 6 7 8 9 

*/
#include<stdio.h>
#include<stdlib.h>


main(){
	int findelt(int r,int *A,int n);
	int t,x,*A,n,i,r;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		A=(int*)malloc((n+1)*sizeof(int));
		for(i=1;i<=n;i++)
			scanf("%d",A+i);
		scanf("%d",&r);
		x=findelt(r,A,n);
		printf("%d\n",x);
	}
return 0;	
}
int sort_and_return_median(int*,int,int,int);

int findelt(int r,int *A,int n)
{
	if(n==1) return A[n];
	else if(n==2){ 
		if(A[1]<A[2])
			return A[r];
		else 
			return A[(r%2 +1)];
		}
	int b=0,key,x,i;
	int *B=(int*)malloc(((n/5)+2)*sizeof(int));
	for(i=1;i<=n;i+=5)
	{
		b++;

		if(i+5 > n)	
				key=sort_and_return_median(A,i,n,(i+n)/2);
		else 		
				key=sort_and_return_median(A,i,i+4,(i+2));
		printf("B[%d]=%d\n",b,key);
		B[b]=key;
	}
	printf("\nMedians\n");
	for(i=1;i<=b;i++)
	{
		printf("%d ",B[i]);
	}
	printf("\n");
	scanf("%d",&i);
	x=findelt(b/2+1,B,b);
	printf("\nApproximate Median\t%d\n",x);
	//Creating AL and AR
	int *Al=(int *)malloc(n*sizeof(int));
	int *Ar=(int *)malloc(n*sizeof(int));
	int le,ri;
	le=ri=0;
	for(i=1;i<=n;i++)
	{
		if(A[i]<x)
		{	le++;Al[le]=A[i];	}
		else if(A[i]>x)
		{	ri++;Ar[ri]=A[i];	}	
	}
	printf("\nPartitions Al ,X and Ar\n");
	for(i=1;i<=le;i++)
		printf("%d ",Al[i]);
	printf("<\t%d\t< ",x);
	for(i=1;i<=ri;i++)
                printf("%d ",Ar[i]);	
	printf("\n");
	scanf("%d",&i);
	
	free(B);
	free(A);
	if(le == r-1)
		return x;
	else if(le > r-1){
		free(Ar);
		printf("Goal : to find %d th element from left\n",r);
		scanf("%d",&i);
		return findelt(r,Al,le);
		}
	else {
		free(Al);
		printf("Goal : to find %d th element from right\n",r-le-1);
                scanf("%d",&i);

		return findelt(r-le-1,Ar,ri);
		}
}

int sort_and_return_median(int* A,int s,int e,int k)
{
int i,j,key;
	for(i=s+1;i<=e;i++)
	{
		j=i-1;
		key=A[i];
		while(j>=s && A[j]>key)
		{
			A[j+1]=A[j];
			j--;
		}
		A[j+1]=key;
	}
printf("\nSorted Subgroup\n");
for(i=s;i<=e;i++)
	printf("%d ",A[i]);
printf("\nReturning %d as median Of the subgroup\n",A[k]);
scanf("%d",&i);
return A[k];
}			
