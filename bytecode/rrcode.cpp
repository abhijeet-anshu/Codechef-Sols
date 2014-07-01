#include<stdio.h>
int main(void){
    int n,k,i;
    unsigned int arr[1000],a;
    int t;
    char str[4];
    scanf("%d",&t);
    while(t--){
        scanf("%d%d%u",&n,&k,&a);
        for(i=0;i<n;i++)
            scanf("%u",arr+i);
        scanf("%s",str);
        if(k==0){

        }
        else if(str=="XOR"){
            if(k&1){
                for(i=0;i<n;i++)
                    a=a^(arr[i]);
            }
            else
                a=0;
        }
        else if(str=="OR"){
            for(i=0;i<n;i++)
                    a=a|(arr[i]);
        }
        else{
            for(i=0;i<n;i++)
                    a=a&(arr[i]);
        }
        printf("%u\n",a);
    }
    return 0;
}


