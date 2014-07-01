#include<cstdio>
int main(){
    int arr[100000]={1,1};
    int j,i,k;
    FILE *fp=fopen("fuckprime.cpp","w");
    for(i=2;i<317;i++){
            if(arr[i]==0){
                for(j=i*i;j<100000;j+=i)
                    arr[j]=1;

            }


    }
    k=0;
    for(i=2;i<100000;i++){
        if(arr[i]==0){
            fprintf(fp,"%d,",i);
            k++;
        }}
            fclose(fp);
            printf("%d\n",k);
            return 0;
    }

