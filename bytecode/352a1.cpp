#include<cstdio>
int main(void){
    int count5=0,count0=0,n,i,k;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&k);
        if(k==0) count0++;
        else count5++;
        }
    if(count0==0){printf("-1\n");return 0;}
    count5=count5-count5%9;
    for(i=0;i<count5;i++) printf("5");
    if(count5!=0){
    for(i=0;i<count0;i++) printf("0");}
    else printf("0");
    printf("\n");
    return 0;
}
