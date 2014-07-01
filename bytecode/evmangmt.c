#include<stdio.h>
#include<stdlib.h>

typedef struct order order;

struct order{
int s;
int e;
int c;
};
order *A;
int *optimal;

void merge(int p,int q,int r){
int a=q-p+1,b=r-q;
	order *x,*y;
	x=(order *)malloc((a+1)*sizeof(order));
	y=(order *)malloc((b+1)*sizeof(order));

int i,j,k;
	i=j=0;
	for(k=p;k<=q;k++)
		x[i++]=A[k];
	x[i].e=100;
	for(k=q+1;k<=r;k++)
		y[j++]=A[k];
	y[j].e=100;
	i=j=0;
	for(k=p;k<=r;k++){
		if(x[i].e <= y[j].e)
			A[k]=x[i++];
		else A[k]=y[j++];
		}
	free(x);
	free(y);
}

void sortmerge(int p,int r){
if(p<r){
	int q=(p+r)/2;
	sortmerge(p,q);
	sortmerge(q+1,r);
	merge(p,q,r);
	}
}

int comp_optimal(int k)
{
	if(k==0) return 0;
	if(optimal[k]==-1){
		int n,m;
		n=comp_optimal(k-1);
		int i;
		m=A[k].s;
		for(i=k-1;i>0;i--)
			if(A[i].e<=m) break;
		m=comp_optimal(i)+A[k].c;
		optimal[k]=m>n?m:n;		
	}
return optimal[k];
}
int main(){
int t,n;
int i,j;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		A=(order*)malloc((n+1)*sizeof(order));
		for(i=1;i<=n;i++)
			scanf("%d%d%d",&A[i].s,&A[i].e,&A[i].c);
		sortmerge(1,n);

		optimal=(int *)malloc((n+1)*sizeof(int));
		for(i=1;i<=n;i++) optimal[i]=-1;
		for(i=1;i<=n;i++){
			j=comp_optimal(i);
		}
		printf("%d\n",optimal[n]);
		free(optimal);
		free(A);
	}
return 0;
}
