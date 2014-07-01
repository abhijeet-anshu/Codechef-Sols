#include<cstdio>
int main(void){
    int n,m,a,b,i,j;
    char str[101][101];
    int t; scanf("%d",&t);
    while(t--){
        scanf("%d%d%d%d",&n,&m,&a,&b);
        b=0;
        for(i=0;i<n;i++){
            scanf("%s",str+i);
            for(j=0;j<m;j++)
                if(str[i][j]=='B')
                   b++;
        }
        printf("%d\n",b);
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(str[i][j]=='B'){
                    printf("3 %d %d\n",i+1,j+1);
                }
            }
        }
    }
    return 0;
}

