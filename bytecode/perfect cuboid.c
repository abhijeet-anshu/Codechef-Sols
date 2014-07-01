#include<cstdio>
#define int_limit 1000000000
#define long_limit 1000000000000000000
#define ll unsigned long long
inline bool issquare(ull n){
    for(ll i=1;i*i<n;i++);
    if(i<=int_limit){
        if(i*i==n)
            return true;
    }
    return false;
}
int main(void){
    ll a,b,c,sum;
    for(a=1;a<=int_limit;a++){
        for(b=1;b<=int_limit;b++){
            for(c=1;c<=int_limit;c++){
                if((a*a)+(b*b)+c*c
            }
        }
    }
}
