#include<cstdio>

struct sticks{
    int x;
    int l;
    void input(){
    scanf("%d%d",&x,&l);}
    bool in_range(sticks &a){
        if(a->x>x && a->x<=x+l-1)
            return true;
    }
};


//struct

int rel[1000][1000];
typedef struct sticks;
int *dp;
int main(){
    int t,n,i,j;
    int count;
    sticks *arr;//=new sticks[n];
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        dp=new int[n];
        for(i=0;i<n;i++)
            dp[i]=-1;
        arr=new sticks[n];
        for(i=0;i<n;i++)
            arr[i].input();
        for(i=0;i<n;i++){
            count=0;
            for(j=0;j<i;j++ ){
                if(arr[i].in_range(arr[j])){
                    count+=
                }
            }
            for(j=i+1;j<n;j++ ){
                if()
            }
        }
    }
}
int recurse(int a){
    if(dp[a]!=-1)
        return dp[a]-1;

}

