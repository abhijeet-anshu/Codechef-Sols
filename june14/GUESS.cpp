#include <bits/stdc++.h>  
#define lli long long 
lli n,m,a,b,pA,k;
lli gcd(lli a, lli b) {
  if(a>b)
    return gcd(a%b,b);
  else if(a==0)
    return b;
 return gcd(b%a, a);
}
int main(void) {
 int t;
 scanf("%d",&t);
 while(t--){
   scanf("%lld%lld", &n, &m);
   // ALICE to win:
     // if A gets even B has to get odd and also vice-versa
     // prob of A getting even
     a=n>>1;
     b=m>>1;
     pA=a*b<<1;// 2ab
     if(m&1)
       pA+=a;//a*(b+1);
     if(n&1)
       pA+=b;
     n=m*n;
     m=gcd(pA,n);
     printf("%lld/%lld\n", pA/m, n/m);
  }
}
