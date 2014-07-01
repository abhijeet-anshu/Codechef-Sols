#include<cstdio>
long long inf ;
long long dp[1001][1001];
long long arr[1001];
int n;
long long maxmin(int s,int e){
    if(s==e)
        return arr[s];
    if(dp[s][e]!=inf)
        return dp[s][e];
    long long a=arr[s]-maxmin(s+1,e);
    long long b=arr[e]-maxmin(s,e-1);

    if(b>a){
        dp[s][e]=b;
        return b;
    }
    dp[s][e]=a;
    return a;
}
int main(void){
    int i,a;
    long long sum=0,ans=0,c,d;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%lld",arr+i);
        sum+=arr[i];
    }
    inf=sum+1;
    for(i=1;i<=n;i++){
        for(a=1;a<=n;a++)
            dp[i][a]=inf;
    }
    ans=maxmin(1,n);
    c=(ans+sum)/2;
    d=(c-ans);
    printf("%lld %lld\n",c,d);
return 0;
}
