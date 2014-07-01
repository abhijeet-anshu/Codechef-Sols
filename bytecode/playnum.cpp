#include<cstdio>
void merge_sort(int*,int,int);
int main(void){
	int t,n,q,i,j,a,b;
	int *arr,*mark,*start_freq,*end_freq;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&n,&q);
		arr=new int[n+1];
		mark=new int[n+1];
		start_freq=new int[n+1];
		end_freq=new int[n+1];
		for(i=1;i<=n;i++){
			scanf("%d",arr+i);
			start_freq[i]=0;
			end_freq[i]=0;
		}
		merge_sort(arr,1,n);
		for(i=1;i<=q;i++){
			scanf("%d%d",&a,&b);
			start_freq[a]++;
			end_freq[b]++;
		}
		j=0;
		for(i=1;i<=n;i++){
            j+=start_freq[i];
            mark[i]=j;
            //printf("for %d starts = %d\n",i,start_freq[])
            j-=end_freq[i];
		}
		j=0;
		merge_sort(mark,1,n);
		for(i=1;i<=n;i++){
         //   printf("%d %d %d\n",i,mark[i],arr[i]);
			j+=mark[i]*arr[i];
		}
		printf("%d\n",j);
	}
return 0;
}
void merge_partition(int *arr,int a,int b,int c)
{
int la=b-a+1;
int lb=c-b;
int *A=new int[la+1];
int *B=new int[lb+1];
A[la]=B[lb]=2000000000;
int i,j,k;
i=a;j=b+1;
for(k=0;k<la;k++)
A[k]=arr[k+i];
for(k=0;k<lb;k++)
B[k]=arr[k+j];
i=j=0;

for(k=a;k<=c;k++)
{
if(A[i]<=B[j])
arr[k]=A[i++];
else
arr[k]=B[j++];
}
delete A;
delete B;
}
void merge_sort(int *arr,int a,int c)
{
if(a>=c) return;
int b=(a+c)>>1;
merge_sort(arr,a,b);
merge_sort(arr,b+1,c);
merge_partition(arr,a,b,c);
}
