#include<cstdio>
#define big 10000000
int dp[101][101][101];
int DP(int i,int val,int packs);
int n,k;
int arr[101];
int main(void){
    int t,i;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&k);
        for(i=1;i<=k;i++){
            scanf("%d",arr+i);
        }
        i=DP(1,k,n);
        if(i>=big )
            i=-1;
        printf("%d\n",i);
    }
return 0;
}
inline int min(int a,int b){
    int m=a<=b?a:b;
    return m>=big?big:m;
}
int DP(int i,int val,int packs){

    if(i==k+1 || packs==0){
        if(val!=0){
            printf("DP(%d,%d,%d)\t",i,val,packs);
            printf("%d\n",big);
            return big;}
        else{
            printf("DP(%d,%d,%d)\t",i,val,packs);
                printf("%d\n",0);
            return 0;
        }
    }
    if(val==0){
            printf("DP(%d,%d,%d)\t",i,val,packs);
                   printf("%d\n",0);
        return 0;
    }
    if(arr[i]==-1){
        printf("DP(%d,%d,%d)\t",i,val,packs);
                   printf("%d\n",DP(i+1,val,packs));
        return DP(i+1,val,packs);}
    if(val>=i){
        printf("DP(%d,%d,%d)\t",i,val,packs);
                   printf("%d\n",min(arr[i]+DP(i,val-i,packs-1),DP(i+1,val,packs)));
        return min(arr[i]+DP(i,val-i,packs-1),DP(i+1,val,packs));
    }
}
