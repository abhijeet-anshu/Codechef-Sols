#include<cstdio>
int main(void){
    int t,sum,i,n,b;
    scanf("%d",&t);


    while(t--){
        sum=0;
        scanf("%d%d",&n,&b);
        for(i=1;i<=n;i++){
            sum+=i;
            if(sum==b)
                break;
        }
        if(i!=n+1){
            sum=0;
            for(i=2;i<=n;i++){
                sum+=i;
            }
        }
        printf("%d\n",sum);
    }


    return 0;
}
