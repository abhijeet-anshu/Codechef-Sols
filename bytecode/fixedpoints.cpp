#include<cstdio>
#include<algorithm>
int main(void){
    int n,i,ans=0,k;
    bool flag=true;
    scanf("%d",&n);
    int *arr=new int[n];
    for(i=0;i<n;i++)
        scanf("%d",arr+i);
    if(n<=2){
        printf("%d\n",n);
        return 0;
    }
    for(i=0;i<n;i++){
        if(arr[i]==i)
            ans++;
        else if(flag){
            k=arr[i];
            if(arr[k]==i){
                ans+=2;
                flag=false;
            }

        }
    }
    if(flag && ans<n)
        printf("%d\n",ans+1);
    else
        printf("%d\n",ans);
    return 0;
}
