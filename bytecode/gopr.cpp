#include<cstdio>
int main(void){
    int t;
    int a,b,c,x,y,z;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d%d",&a,&b,&c);
        scanf("%d%d%d",&x,&y,&z);
        a=(x-a)*3600+(y-b)*60+(z-c);
        a=a%400;
        if(a<=99){
            printf("S\n");
        }
        else if(a<=199){
            printf("C\n");
        }
        else if(a<=299){
            printf("S\n");
        }
        else if(a<=399){
            printf("C\n");
        }
    }
    return 0;
}

