#include<cstdio>
int main(void){
    int freq[5001]={0},check[5001]={0},arr[6000001];
    int n,i,j;
    scanf("%d",&n);
    n=n<<1;
    /*
    for(i=1;i<=n;i++){
        scanf("%d",arr+i);
        freq[arr[i]]++;
    }
    for(i=1;i<=5000;i++){
        j=freq[i];
        if((j&1)==1){
            printf("-1\n");// omit /n
            return 0;
        }
    }
    for(i=1;i<=n;i++){
        j=arr[i];
        if(check[j]==0)
            check[j]=i;
        else{
            printf("%d %d\n",check[j],i);
        }
    }
    */
    return 0;
}

