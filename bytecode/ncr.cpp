    #include<stdio.h>
    #define ui unsigned long long

    ui arr[65][65]={0},n;
    int main(){
        arr[1][1]=arr[1][0]=1llu;
        int i,j,t;
        for(i=2;i<65;i++){
            arr[i][1]=i;
            for(j=2;j<=i;j++){
                arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
            }
        }
        scanf("%d",&t);
        while(t--){
            scanf("%llu",&n);
            for(i=1;i<=64;i++){
                if(arr[i][i>>1]>=n){
                    printf("%d\n",i);
                    break;
                }
            }
          }
          return 0;
    }

