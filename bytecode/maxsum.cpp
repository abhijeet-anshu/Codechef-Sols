#include<cstdio>
#include<algorithm>
#define ull long long int
int main(void){
    int n,q,i,a,b;
    int *start,*end;
    scanf("%d%d",&n,&q);
    ull *arr=new  ull [n];
    ull interval,*ARR=new  ull [n];

    start=new int[n];
    end=new int[n];
    for(i=0;i<n;i++){
        start[i]=0;
        end[i]=0;
    }
    for(i=0;i<n;i++){
        scanf("%I64d",arr+i);
    }
    for(i=0;i<q;i++){
        scanf("%d%d",&a,&b);
        start[a-1]++;
        end[b-1]++;
    }
    interval=0;
    for(i=0;i<n;i++){
        interval+=start[i];
        ARR[i]=interval;
        interval-=end[i];
    }
    interval=0;
    std::sort(arr,arr+n);
    std::sort(ARR,ARR+n);
    for(i=0;i<n;i++){
        interval+=(arr[i])*(ARR[i]);
    }
    printf("%I64d\n",interval);
    return 0;

}
