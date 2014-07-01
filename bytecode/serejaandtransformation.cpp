#include<cstdio>
#define mod %1000000007
#define REM 1000000007
#define ull unsigned long long
#define iszero ==0llu
#define one 1llu
#define isone ==1llu



ull pow(ull a,ull n){
    if(n iszero){
        return one;
    }

    else if(n isone){
        return a mod;
    }

    ull k,p;
    k=pow(a,n>>1);
    if(n&1){
        return k*k mod * a mod;
    }
    else
        return k*k mod;
}

int main(void){

    ull n,m,x,ans;

    int t;
    scanf("%d",&t);

    while(t--){

        scanf("%llu%llu%llu%llu",&n,&m,&x,&ans);

        if(n==1){
            if(x iszero){
                printf("%llu\n",m);
            }

            else

                printf("0\n");

            continue;

        }
        else if (m<=x){

            printf("0\n");
            continue;
        }



        ans=(pow(x+1,n)+pow(x-1,n)) mod + REM;
        ans = ((ans + REM) - ((2 * pow(x,n)) mod ) ) mod ;
        ans =(ans *(m  -x )) mod;

        printf("%llu\n",ans);
    }
    return 0;
}
