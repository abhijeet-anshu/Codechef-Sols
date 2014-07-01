#include<cstdio>
int main(void){
    int k=63;
    for(int c=1;c<=k;c++){
        for(int d=1;d<=k;d++){
            for(int a=1+c;a<=k;a++){
                for(int b=1+d;b<=k;b++){
            if(((c*c*c*c*c*b*b*b*b*b)+(a*a*a*d*d*d*d))==(a*a*a*a)*(b*b*b*b))
                printf("%d/%d,%d/%d\n",c,a,d,b);

        }}}}
    }

