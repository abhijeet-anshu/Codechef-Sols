#include<cstdio>
#define max 101
int main(void){
    int n,i,x,y;

    int asum,bsum,oe,eo,ee,oo;
    asum=bsum=oe=eo=0;

    scanf("%d",&n);
    bool flag;

    for(i=0;i<n;i++){
        scanf("%d%d",&x,&y);

        if((x&1) && (y&1)==0){
           oe++;
        }
        else if((x&1)==0 && (y&1)){

            eo++;

        }
        asum+=x;
        bsum+=y;

    }

    //

    if(((asum&1)==0) &&((bsum&1)==0)){

    //printf("%d %d\n %d %d\n",a,a&1,b,b&1);

        printf("0\n");

        return 0;

    }
    else if(n==1){
        printf("-1\n");

        return 0;


    }

    //printf("oe%d eo%d\n",oe,eo);

    if((asum&1) && (bsum&1)){

        if(oe>0){

            printf("1\n");

        return 0;

        }

        else if(eo>0){

            printf("1\n");

        return 0;

        }

    }

        printf("-1\n");
        return 0;
}
