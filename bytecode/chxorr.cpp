#include<cstdio>
int main(void){
    int n,arr[2000];
    int t,max,i,j,k,d;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",arr+i);
            max=arr[0]^arr[1]^arr[2];
        for(i=0;i<n-2;i++){
            for(j=i+1;j<n-1;j++){
                for(k=j+1;k<n;k++){
                    d=arr[i]^arr[j]^arr[k];
                    if(d>max)
                        max=d;
                }
            }
        }
        printf("%d\n",max);
    }
    return 0;
}
