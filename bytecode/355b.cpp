#include<cstdio>
#include<iostream>
#define ll long long int
inline ll min(ll a,ll b){
    return a<b?a:b;
}
using namespace std;
int main(void){
    ll sum1,sum2;
    ll c1,c2,c3,c4,k;
    int m,n,i;
    cin>>c1>>c2>>c3>>c4;
    //printf("%I64D %I64D %I64D %I64D\n",c1,c2,c3,c4);
    cin>>n>>m;
    k=0;
    sum1=0;sum2=0;
    for(i=0;i<n;i++){
        cin>>k;
        sum1+=min(c1*k,c2);
    //    printf("%d sum is %I64D\n",i+1,sum1);
    }
    for(i=0;i<m;i++){
        cin>>k;
        sum2+=min(c1*k,c2);
      //  printf("%d sum is %I64D\n",i+1,sum2);
    }
    sum1=min(sum1,c3);
    sum2=min(sum2,c3);
    cout<<min(sum1+sum2,c4);
    return 0;
}
