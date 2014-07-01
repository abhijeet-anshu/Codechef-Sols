#include<cstdio>
#include<algorithm>
int main(void){
    int n,i;
    scanf("%d",&n);
    int *arr=new int[n];
    for(i=0;i<n;i++)
        scanf("%d",arr+i);
    std::sort(arr,arr+n);
    printf("%d ",arr[n-1]);
    for(i=1;i<n-1;i++)
        printf("%d ",arr[i]);
    printf("%d\n",arr[0]);
}
