#include<cstdio>
#include<cmath>
#include<cstdlib>
void merge_sort(int *arr,int a,int c);
int main(void){
    int i,n;
    unsigned long long int x;
    scanf("%d",&n);
    int *arr=new int[n];
    for(i=0;i<n;i++)
        scanf("%d",arr+i);
    scanf("%llu",&x);
    merge_sort(arr,0,n-1);
    //for(i=0;i<n;i++){
        //printf("%d  %llu\n",arr[i],llabs(arr[i]));
    //}
    if((arr[0]>=0)|| (x==0llu)){
        printf("0\n");
        return 0;
    }
    else if(x==1){
        printf("%d\n",arr[0]);
        return 0;
    }
    for(i=0;i<n;i++){
        if(arr[i]>0){
            i--;
            break;
        }
    }
    n=i;
    unsigned long long int sum=0,min=llabs(arr[0]),abhijeet,bar ;
    sum=min;
    min = min * x;
    for(i=1;i<=n;i++){
        bar=llabs(arr[i]);
        abhijeet=bar*x+sum - i*bar;// sum is sum of i terms
        if(abhijeet<min)
            min=abhijeet;
        sum=sum+bar;
    }
    if(sum<min)
        min=sum;
    printf("%llu\n",min);
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
