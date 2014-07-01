#include<cstdio>
#define hundred double(100)
#define one double(1)
int n,a[101],b[101],c[101],mark[17];
double recursive(int i);
int main(void){
    int t,i;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(i=1;i<=n;i++)
            scanf("%d%d%d",c+i,a+i,b+i);
        for(i=1;i<=16;i++)
            mark[i]=-1;
        printf("%lf\n",recursive(1));
    }
    return 0;
}
double recursive(int i){
    if(i==n+1){
        return 1.0;
    }
    double ans;
    if(mark[a[i]]==1 && mark[b[i]]==1)
        return 0;
    else if(mark[a[i]]==1){
        mark[b[i]]=1;
         ans=(one-c[i]/hundred)*recursive(i+1);
         mark[b[i]]=-1;
         return ans;
    }
    else if(mark[b[i]]==1){
        mark[a[i]]=1;
         ans=(c[i]/hundred)*recursive(i+1);
         mark[a[i]]=-1;
         return ans;
    }
    else{
        mark[b[i]]=1;
         ans=(one-c[i]/hundred)*recursive(i+1);
         mark[b[i]]=-1;
        mark[a[i]]=1;
         ans+=(c[i]/hundred)*recursive(i+1);
         mark[a[i]]=-1;
    return ans;
    }
}
