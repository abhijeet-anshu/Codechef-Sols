#include<cstdio>
char matrix[11][11];
bool check_equal(int i,int a,int row,int j,int b,int col){

int u=i,v=a,w=j,x=b,y=i+row,z=j+col;
if((i==1 && row==2)&&(j==1&& col==2)){
        printf("%d  %d  \n",y,z );
for(u=i;u<=y;u++){
    for(w=j;w<=z;w++){

    printf("compare %d%d and %d%d\n",u,w,v,x);
    if((matrix[u][w])!=(matrix[v][x]))
            return false;
            x++;
    }

v++;
}

}
for(u=i;u<=y;u++){
    for(w=j;w<=z;w++){

    if((matrix[u][w])!=(matrix[v][x])){
            return false;
        }
            x++;
    }

v++;
}
return true;
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

        for(i=1;i<=n;i++){


          //  for(j=1;j<=m;j++){

                scanf("%s",matrix[i]+1);
                //printf("%s\n",matrix[i]+1);
            }

        flag=false;
        // decide the biggest row size
        for(row=n-1;row>=0;row--){

            for(i=1;i+row<=n;i++){
                for(col=m-1;col>=0;col--){

                    for(j=1;j+col<=m;j++){

                        // pick another sub matrix of same dimensions if equal report  it done :P

                        for(a=1;a+row<=n;a++){

                                for(b=1;b+col<=m;b++){


                                    if(a==i && b==j)
                                        continue;

                                    flag=check_equal(i,a,row,j,b,col);
                                    //for(int y=)
                                    //printf("compare")
                                    printf("checked equal at %d,%d,%d,%d,%d,%d\n",i,a,row,j,b,col);
                                    if(flag){
                                            printf("found\n");
                                            break;}
                                }
                                if(flag)break;

                        }
                        if(flag) break;
                    }
                    if(flag)break;
                }
                if(flag)break;
            }
            if(flag)break;
        }
        if(flag)
            printf("%d\n",(row+1)*(col+1));
        else
            printf("0\n");
    }

    //while(true);
    return 0;
}

