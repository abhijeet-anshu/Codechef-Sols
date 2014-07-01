#include<cstdio>
#include<cmath>
#include<assert.h>
#define ui long long int
// codechef LTIME 4
int arr[10],n;
inline ui gmin(ui a,ui b){return a<b?a:b;}
ui findmin(int i,ui val){
    if(i==n-1)
        return val;
    ui a,b,c,m;
    m=val* (arr[i+1]);
    a=findmin(i+1,m);
    m=val- (arr[i+1]);
    b=findmin(i+1,m);
    m=val+ (arr[i+1]);
    c=findmin(i+1,m);
    m=gmin(gmin(a,b),c);
    return m;
}
int main(void){
    int i,t;scanf("%d",&t);
    assert(1<=t && t<=100000);
    while(t--){scanf("%d",&n);
            assert(n>=1&&n<=10);
            for(i=0;i<n;i++){ scanf("%d",arr+i);
            assert(arr[i]>=-9 && arr[i]<=9);
            }
            printf("%lld\n",findmin(0,arr[0]));
    }
return 0;
}
