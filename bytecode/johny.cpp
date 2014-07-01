#include<cstdio>
#include<algorithm>
#define LIM 1000
int main(void){
int t,n,i,arr[LIM],b,k;
scanf("%d",&t);
while(t--){
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",arr+i);
        }
        scanf("%d",&k);
        b=arr[k-1];
        std::sort(arr,arr+n);
        for(i=0;i<n;i++){
            if(arr[i]==b)
                break;
        }
        if(i<n)
            printf("%d\n",i+1);

}
return 0;
}
