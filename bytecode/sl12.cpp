#include<cstdio>
#define lim 100001
#define llu long long
static llu arr[lim],money,min[lim],max[lim],ans,lans,q;
inline llu MIN(llu a,llu b){
return a<b?a:b;}
inline llu MAX(llu a,llu b){
return a>b?a:b;}
int main(void){
    int t,n,i;
    scanf("%d",&t);
    while(t--){
            scanf("%d",&n);
            scanf("%lld",&money);

 //           for(i=0;i<n;i++)
   //             scanf("%lld",arr+i);
            if(n==1){
                printf("%lld\n",money);
                continue;
            }/*
            ans=-1;
            min[0]=arr[0];
            max[n-2]=arr[n-1];
            for(i=1;i<n;i++){
                min[i]=MIN(min[i-1],arr[i]);
                }
            for(i=n-3;i>=0;i--){
                max[i]=MAX(max[i+1],arr[i+1]);
            }
            lans=ans=money;
            //*
            for(i=0;i<n-1;i++){
                q=money/(min[i]);
                if(money>(min[i])){
                lans=money%(min[i]) + q*(max[i]);
                ans=MAX(lans,ans);
                }
            }//*/
            printf("%lld\n",ans);
    }
    return 0;
}


