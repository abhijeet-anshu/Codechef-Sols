#include<cstdio>
#define mod %1000000007
int main(void){

    int t,lenl,lenr;

    long long i,a,b,c,l,r,cpl,cpr,k;

    scanf("%d",&t);
    while(t--){

        scanf("%lld%lld",&l,&r);

        cpl=l;
        cpr=r;

        lenl=0;
        while(cpl>0){
            lenl++;
            cpl=cpl/10;
        }
        lenr=0;
        while(cpr>0){
            lenr++;
            cpr=cpr/10;
        }

        b=1;
        c=9;
        a=0;
        for(i=lenl;i<lenr;i++){

            if(i==lenl){
                for(k=1;k<lenl;k++){

                    b=b*10;
                    c=c*10+9;
                }

                a+= ((((c-l+1)*(c+l) mod)>>1) mod *(long long )(i) )mod;
            }
            else{
                a+=((((c-b+1)*(c+b)) mod)>>1)  mod *(long long )(i) mod;
            }
                b=b*10;
                c=c*10+9;
        }
        if(lenl==lenr){
            a+=(((r-l+1)*(l+r) mod)>>1) mod * (long long )(lenr) mod;
        }
        else{
            a+=(((r-b+1)*(r+b) mod)>>1)mod *(long long )(lenr) mod;
        }

        printf("%lld\n",a);
        }
return 0;
    }

