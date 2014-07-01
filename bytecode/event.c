#include<stdio.h>
#include<stdlib.h>

struct job{
int s;
int e;
int w;
};
typedef struct job job;
job *j;
int n;
int o[2010];


void merge(int p,int q,int r){
int la=q-p+1,lb=r-q;
job *x= (job*)malloc((la+1)*sizeof(job)),*y= (job*)malloc((lb+1)*sizeof(job));
int i,m,k;
i=m=0;
for(k=p;k<=q;k++){	x[k]=j[i];	i++;}
for(k=q+1;k<=r;k++){	y[k]=j[m];	m++;}
i=m=0;
x[la].e=49;
y[lb].e=49;
for(k=p;k<=r;k++){
	if((x[i]).e<(y[m]).e)
		j[k]=x[i++];
	else
		j[k]=y[m++];
	}
}


void mg_sort(int p,int r){
if(p<r)
{
	int q=(p+r)/2;
	mg_sort(p,q);
	mg_sort(q+1,r);
	merge(p,q,r);
}
}

int main()
{
int t;
int i;
scanf("%d",&t);
while(t--)
{
	scanf("%d",&n);
	j=(job *)malloc(n*sizeof(job));
	for(i=0;i<n;i++)
		scanf("%d%d%d",&(j[i].s),&(j[i].e),&(j[i].w));
	for(i=0;i<n;i++)
                printf("%d\t%d\t%d\n",j[i].s,j[i].e,j[i].w);
	mg_sort(0,n-1);
	for(i=0;i<n;i++)
		printf("%d\t%d\t%d\n",j[i].s,j[i].e,j[i].w);
}}	
	
	/*
	for(i=1;i<=n;i++)	o[i]=-1;
	o[0]=0;
	for(i=1;i<=n;i++)
	{
		opt(i);
	}
	printf("%d\n",o[n]);
	
}
return 0;
}
int opt(int k)
{
	if(o[k]==-1){
		int m,w,i;
		m=opt(k-1);
		for(i=k-1;i>0;i++){
			if(j[k-1].e>j[i-1].e)
				break;
		}
		w=opt(i)+j[k-1].w;
		o[k]=m>w?m:w;
		}		

return o[k];*/
//}}	
