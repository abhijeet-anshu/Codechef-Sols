#include<cstdio>
#include<cassert>
#define max 1000000
int arr[max];
void cuthalf(int n){
    int i,j;

   // for(i=1;i<=n;i++)
     //  printf("%d..",arr[i]);
    //printf("\n");
    if(n==1)
        return ;
    if(n&1){
        arr[1]=arr[n];
        j=2;
        for(i=2;i<n;i+=2){
            arr[j]=arr[i];
            j++;
        }
        cuthalf((n>>1)+1);
    }
    else {
        j=1;
        for(i=2;i<=n;i+=2){
            arr[j]=arr[i];
            j++;
        }
        cuthalf((n>>1));
    }
}
int main(void){
    int n,i,j,hf;
    while(true){
        scanf("%d",&n);
        if(n==0)
            break;
        assert(n<200001 && n>0);
        hf=n>>1;
        if(n&1){
            arr[1]=n;
            i=2;
            hf++;
            for(j=2;j<=hf;j++){
                arr[j]=i;
                i+=2;}
            cuthalf(hf );
        }
          else{
            i=2;
            for(j=1;j<=hf;j++){
                arr[j]=i;
                i+=2;
            }
            cuthalf(hf);
          }
          printf("%d\n",arr[1]);
    }
return 0;
}

