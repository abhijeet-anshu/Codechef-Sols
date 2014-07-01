#include<cstdio>

#define M 100000

#include<cmath>

#include<algorithm>

using namespace std;
int main(void){
    int x,t,n,i,j,count;
    double *A,*B;
    double a,b,answer;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        A=new double[n];
        B=new double[n];
        for(i=0;i<n;i++){
            scanf("%d",&x);
            a=log(x);
            A[i]=a/x;
        }
        for(i=0;i<n;i++){
            scanf("%d",&x);
            b=log(x);
            B[i]=b/x;
        }
        if(n==1){
                if(A[i]>B[i]){
                printf("%lf\n",1.0);
                continue;
            }
            else{
                printf("%lf\n",0.0);
                continue;
            }
        }
        sort(A,A+n);
        sort(B,B+n);
        /*
        for(i=0;i<n;i++){
            printf("%lf ",A[i]);
        }
        printf("\n");
        for(i=0;i<n;i++){
            printf("%lf ",B[i]);
        }
        printf("\n");*/
        j=0;
        answer=0;
        for(i=0;i<n;i++){
            for(;j<n;j++){
                if((A[i])<=(B[j])){
                    //printf("break at j %d\n",j);
                    break;
                }
            }
            answer+=j/(double)n;
        }
        printf("%lf\n",answer);
        delete A;
        delete B;
    }
    return 0;
}
