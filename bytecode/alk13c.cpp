#include<cstdio>
#define ll long long
int main(void){
    int t,n,x,y,i;
    ll rdistinct,cdistinct;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int xarr[200002]={0};
        int yarr[200002]={0};
        rdistinct=cdistinct=0;
        for(i=0;i<n;i++){
            scanf("%d%d",&x,&y);
            x+=100000;
            y+=100000;
            if(xarr[x]==0){
                xarr[x]=1;
                rdistinct++;
            }
            if(yarr[y]==0){
                yarr[y]=1;
                cdistinct++;
            }
        }
        if(n==0)
            printf("0\n");
        else
            printf("%lld\n",(rdistinct+1)*(cdistinct+1));
    }
    return 0;
}

