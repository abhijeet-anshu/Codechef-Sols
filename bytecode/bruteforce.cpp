#include<cstdio>
char matrix[20][20];
bool check_equal(int i,int a,int row,int j,int b,int col){

int u=i,v=a,w=j,x=b,y=i+row,z=j+col;
    for(u=i;u<=y;u++){
        x=b;
        for(w=j;w<=z;w++){
        if((matrix[u][w])!=(matrix[v][x]))
                return false;
                x++;
        }
        v++;
    }
return true;
}
inline int max(int a,int b){
    return a>b?a:b;
}
int main(void){
    int t,n,m;
    int row,col;
    bool flag;
    int i,j;
    int a,b,c,d;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&m);
        for(i=1;i<=n;i++) scanf("%s",matrix[i]+1);
        flag=false;
        d=0;
        for(row=0;row<n;row++){
            for(i=1;i+row<=n;i++){
                for(col=0;col<m;col++){
                    for(j=1;j+col<=m;j++){
                        for(a=1;a+row<=n;a++){
                                for(b=1;b+col<=m;b++){
                                    flag=false;
                                    if(a==i && b==j) continue;
                                    flag=check_equal(i,a,row,j,b,col);
                                    if(flag)
                                        d=max(d,(row+1)*(col+1));
                                        }
                                }}}}}
         printf("%d\n",d);
        }
    return 0;}


