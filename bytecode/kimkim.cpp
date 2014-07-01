#include<stdio.h>
FILE *in=fopen("input.txt","r");
FILE *out=fopen("output.txt","w");
int main(void){
    int n,k;
    fscanf(in,"%d",&n);
    n=n<<1;
    int *arr=new int [n+1];
    int freq[5001]={0},check[5001]={0};
    int i;
    for(i=1;i<=n;i++){
        fscanf(in,"%d",arr+i);
        freq[(arr[i])]++;
    }
    for(i=1;i<=5000;i++){
            k=freq[i];
            if((k&1)==1){
                fprintf(out,"-1\n");
                return 0;
        }
    }
    for(i=1;i<=n;i++){
        k=arr[i];
        if(check[k]==0)
            check[k]=i;
        else{
            fprintf(out,"%d %d\n",i,check[k]);
            check[k]=0;
        }
    }
    fclose(in);
    fclose(out);
return 0;
}
