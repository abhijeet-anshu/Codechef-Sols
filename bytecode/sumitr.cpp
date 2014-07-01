#include<cstdio>
#define I(a) scanf("%d",&a);
int a[6000],s[6000],N,max,i,t,k;int S(int n,int k){int i=n*(n-1)/2+k;int x,y;if(n==N)s[i]=a[i];else if(s[i]==-1){x=S(n+1,k);y=S(n+1,k+1);s[i]=a[i]+(x>y?x:y);}return s[i];}main(){I(t)while(t--){I(N)max=N*(N+1)/2;while(max--){I(a[i])s[i]=-1;}k=S(1,1);printf("%d\n",k);}return 0;}
