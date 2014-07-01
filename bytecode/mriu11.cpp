#include<cstdio>
int main(void){
    int  x,y;
    double amount;
    //while(true){
    scanf("%d%lf",&x,&amount);
    if((x+0.5)>amount){
        printf("%0.2lf\n",amount);
    }
    else if(x%5!=0){
        printf("%0.2lf\n",amount);
    }
    else {
        amount=amount-(x+0.5);
        printf("%0.2lf\n",amount);
    }//}
    return 0;
}
