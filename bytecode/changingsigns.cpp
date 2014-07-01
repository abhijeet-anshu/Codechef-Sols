#include<cstdio>
int main(void){
    int n,k,sum=0,i,j,h,psum=0,nsum=0,count=0;
    scanf("%d%d",&n,&k);
    int *arr=new int[n];
    for(i=0;i<n;i++){
        scanf("%d",arr+i);
        if(arr[i]<0){
            count++;
            nsum+=arr[i];
        }
        else
            psum+=arr[i];
    }
    // if all positive
    if(arr[0]>=0){
        if(k&1)
            sum=psum-nsum-2*arr[0];
        else
            sum=psum-nsum;
        printf("%d\n",sum);
        return 0;
    }

    if(k<=count){
        for(i=0;i<k;i++)
            sum+=-arr[i];
        for(;i<n;i++)
            sum+=arr[i];
        printf("%d\n",sum);
        return 0;
    }

    if(n==1){
        if(k&1)
            printf("%d\n",-arr[0]);
        else
            printf("%d\n",arr[0]);
        return 0;
    }
    h=k-count;
    if(h&1){
        if(count==n)
            printf("%d\n",psum-nsum+2*arr[n-1]);
        else if(arr[count]>-arr[count-1])
            printf("%d\n",psum-nsum+2*arr[count-1]);
        else
            printf("%d\n",psum-nsum-2*arr[count]);
    }
    else
        printf("%d\n",psum-nsum);


return 0;
}
