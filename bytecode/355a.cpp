#include<cstdio>
int k,d;
//int *num;
int main(void){
    int i,j;
    scanf("%d%d",&k,&d);
    //num=new int[k];
    //num[0]=d;
    if(d==0){
            if(k==1)
            printf("0\n");
            else
                printf("No solution\n");
        return 0;}
    printf("%d",d);
    for(i=1;i<k;i++){
        printf("0");
    }
    printf("\n");
    return 0;
}
/*
int permute(int index){
    if(index>0)
}
int digital_root(int sum){
    if(sum<10)
        return sum;
    int s=0;
    while(sum){
        s=s+sum%10;
        sum=sum/10;
    }
    return digital_root(s);
}
*/
