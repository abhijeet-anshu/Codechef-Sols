#include<cstdio>
#include<cmath>
#define uli unsigned long long
int main(){
    double n;
    while(true){
    scanf("%lf",&n);
    if(n==0.0)
        break;
    printf("%lf\n",n);
    printf("%lf\n",(sqrt(n)));
    }
    return 0;
}
