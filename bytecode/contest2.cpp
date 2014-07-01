#include<cstdio>
#define mod %1000000007
int main(void){

    int t;

    long long i,a,b,c,l,r,cpl,cpr,k,lenr,lenl;

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

                a=  (a+    ( (c-l+1)*(c+l) >>1 ) mod * lenl mod )  mod;
            }
            else{
                a=(a+    (  (c-b+1)*(c+b)  >>1)  mod * i mod)  mod;
            }
                b=b*10;
                c=c*10+9;
        }

        if(lenl==lenr){

            //for(k=1;k<lenl;k++){

              //      b=b*10;
                //    c=c*10+9;
                //}

            a=(a+     ( (r-l+1)*(l+r)  >>1) mod * lenr mod)mod;
        }
        else{
            a=(a+  ( (r-b+1)*(r+b )>>1)  mod * lenr mod)  mod;
        }

        printf("%lld\n",a mod);
        }
return 0;
}

//999999999  10000000001000000000
