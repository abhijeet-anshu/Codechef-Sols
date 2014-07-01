
#include<cstdio>
int main(void){
    long long  arr[100000];
    int n,t,i;
    long long  ans;
    scanf("%d",&t);
    while(t--){

        scanf("%d",&n);

        for(i=0;i<n;i++){
            scanf("%lld",arr+i);
        }
        ans=arr[n-1];
        printf("%lld\n",ans);

        for(i=n-2;i>=0;i--){

            arr[i]=arr[i]+((arr[i])^(arr[i+1]));
            printf("%lld\n",arr[i]);
            ans+=arr[i];

        }

        printf("%lld\n",ans);


    }

    return 0;

}
