#include<cstdio>
#define inf 1000000
int main(void){
    int t,a,b,c,i,j;
    int L,K,min,key[257];
    scanf("%d",&t);
    while(t--){
        int cost[257][257]={0};
        scanf("%d%d",&L,&K);
        for(i=0;i<K;i++){scanf("%d%d%d",&a,&b,&c);cost[a][b]=c;}
        key[0]=0;
        for(i=1;i<=L;i++) key[i]=inf;
        for(i=0;i<=L;i++){
            for(j=i+1;j<=L;j++){ if(cost[i][j]==0)cost[i][j]=inf;}}
        for(i=1;i<=L;i++){
            min=key[i];
            for(j=0;j<i;j++){
                c=key[j]+cost[j][i];
                if(min>c)min=c;}
            key[i]=min;
            for(j=1;j<i;j++){
                    if(key[j]>key[i])
                        key[j]=key[i];
            }
        }
        if(key[L]>=inf){
            printf("-1\n");
            continue;
        }
        else
            printf("%d\n",key[L]);
    }
    return 0;
}
