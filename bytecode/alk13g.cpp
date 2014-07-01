#include<cstdio>
#define ll long long

inline ll abs(ll a){
return a>0?a:-a;}

inline ll min(ll a,ll b){
return a<b?a:b;
}

int main(void){
    int t,n,i;//,sum;
    ll arr[100000],m,sum;
    ll dp[100000];
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        sum=0;
        for(i=0;i<n;i++){
            scanf("%lld",arr+i);
            sum+=arr[i];
        }
        //printf("%sum :lld\n",sum);
        m=dp[0]=arr[0];
        for(i=1;i<n;i++){
            dp[i]=min(arr[i],arr[i]+dp[i-1]);
            m=min(m,dp[i]);
        }
        //printf("%min :lld\n",m);
        if(m<0)
            sum+=(-m)<<1;
        printf("%lld\n",sum);
    }
return 0;
}
