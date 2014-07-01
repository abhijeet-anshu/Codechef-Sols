#include<cstdio>
#include<cstdlib>
int partition(int start,int end);
int n;
int arr[10001];
int main(void){
    int i,t,z,k;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&z);
        for(i=1;i<=n;i++)
            arr[i]=0;
        for(i=0;i<z;i++){
            scanf("%d",&k);
            arr[k]=1;
        }
        printf("%d\n",partition(1,n));
        }
        return 0;
}
int partition(int start,int end){
    if(start>=end)
        return 0;
    int half=start+end>>1;
    if(arr[half]==1)
        return end-start+partition(start,half-1)+partition(half+1,end);
    int k=half+1,l=half-1;
    while(k<=n || l>0){
        if(k<=n){
            if(arr[k]==1)
                return end-start+partition(start,k-1)+partition(k+1,end);
            continue;
        }
        if(l>0){
            if(arr[l]==1){
                return end-start+partition(start,l-1)+partition(l+1,end);}
            continue;
        }
        diff++;
        k++;
        l--;}
}
