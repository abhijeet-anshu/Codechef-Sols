#include<cstdio>
#define uli unsigned long long int

uli gcd(uli a,uli b){
    if(a<b)
        return gcd(b,a);
    else if(b==0)
        return a;
    else
        return gcd(b,a%b);
}

int main(){
    uli n,i,j,k,count=0;
    int t;
    scanf("%d",&t);
    while(t--){
    count=0;
    scanf("%llu",&n);
    for(i=1;i*i<=n;i++){
        count+=i*(n/i-n/(i+1));
    }
    i--;
    for(j=1;;j++){
            k=n/j;
            if(k<=i)
                break;
            count+=k;
    }
    k=n*n;
    i=gcd(count,k);
    k=k/i;
    count=count/i;
    printf("%llu/%llu\n",count,k);
    }
    return 0;
}
