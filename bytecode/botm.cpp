#include<cstdio>
#define ll long long
inline ll ABS(ll a){
    return a<0?-a:a;
}
int main(void){
    int t,n,i;
    ll a,sum,k,arr[100000];
    scanf("%d",&t);
    while(t--){
        sum=0;
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%lld",arr+i);
            sum+=arr[i];
        }
        //printf("sum %lld\n",sum);
        a=sum/n;
        sum=0;
        for(i=0;i<n;i++){
            sum+=ABS(a-arr[i]);
        }
        //printf("sum %lld\n",sum);
        printf("%lld\n",sum);
    }
    return 0;
}
