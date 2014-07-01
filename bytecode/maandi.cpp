#include<cstdio>
#include<cmath>
inline bool isOverLucky(int a){
    int n;
    //printf("checking %d \n",a);
    while(a){
        n=a%10;
        if(n==3 || n==5) return true;
        else if(n==6) return true;
         a=a/10;}

    return false;
}
int main(void){
    int t,n,i,j,sq,count;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        count=0;
        sq=(int)sqrt(n);
       // printf("%d the square root\n",sq);
        if(isOverLucky((n))) count++;
        for(i=2;i<sq;i++){
            //printf("%d ")
            if(n%i==0){
            if(isOverLucky((i))) count++;
            if(isOverLucky((n/i))) count++;
            }
        }
        if(sq*sq==n)
           {if(isOverLucky((sq)))count++;}
        else{
            if(n%sq==0){
            if(isOverLucky((sq)))count++;
            if(isOverLucky((n/sq)))count++;}
        }
        printf("%d\n",count);
    }
    return 0;
}
