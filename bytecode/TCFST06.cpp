#include<cstdio>
inline int min(int a,int b){
return a<b?a:b;}
int main(void){
    int n,i,count=200000;
    int arr[100000];
    int negative[100000]={0};
    int positive[100000]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",arr+i);
    if(arr[0]<0)
        negative[0]=1;
    for(i=1;i<n;i++){
        negative[i]=negative[i-1];
        if(arr[i]<0){
            negative[i]++;
        }
    }
    if(arr[n-1]>0)
        positive[n-1]=1;
    for(i=n-2;i>=0;i--){
        positive[i]=positive[i+1];
        if(arr[i]>0)
            positive[i]++;
    }

    for(i=1;i<n;i++){
        count=min(-negative[i]+n-positive[i],count);
    }
    printf("%d\n",count);
    return 0;
}


