#include<cstdio>
int mark[10]={0};
int matrix[10][10]={{0,0,0,0,0,0,0,0,0},{0,0,1,0,1,1,0,0,0,0},{0,1,0,1,1,1,1,0,0,0},{0,0,1,0,0,1,1,0,0,0},{0,1,1,0,0,1,0,1,1,0},{0,1,1,1,1,0,1,1,1,1},{0,0,1,1,0,1,0,0,1,1},{0,0,0,0,1,1,0,0,1,0},{0,0,0,0,1,1,1,1,0,1},{0,0,0,0,0,1,1,0,1,0} };
int count(int n,int level);
int main(){
    int sum=0,k,i,h;
    for(i=1;i<=9;i++){
        k=count(i,1);
        mark[i]=1;
        printf("starting with %d combinations: %d\n",i,k);
        sum+=k;
        mark[i]=0;
    }
    printf("%d patterns\n",sum);
    return  0;
    }

int count(int n,int level){
    int sum=0;
    //if(level==9)
      //  return 1;
    if (level>=4)
        sum=1;
    int i;
    for(i=1;i<10;i++){
        if(matrix[n][i]==1){
            if(mark[i]==0){
                mark[i]=1;
                sum+=count(i,level+1);
                mark[i]=0;
            }
        }
    }
    return sum;
}
