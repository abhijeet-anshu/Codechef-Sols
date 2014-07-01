#include<cstdio>
int main(void){
    int t,m,n,k,l,a,b;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&m,&n);
        if(n<m){
            a=m;
            m=n;
            n=a;
        }
        if(m==1 && n==1){
            printf("1\n");
            continue;}
        else if(m==1 || n==1){
            printf("%d\n",2);
            continue;
        }
        if((n-m)%(m-1)!=0){
            printf("%d\n",2);
            continue;
        }
        else if((n-1)%(m-1)!=0){
            printf("%d\n",2);
            continue;
        }
        else{
            a=(m-n)/(m-1);
            b=(n-1)/(m-1);
            printf("%d\n",(n-a)/b);
        }

    }
    return 0;
}
