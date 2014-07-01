#include<cstdio>
int n,p[100],t[100],C[100][100];
int find_optimal(int i,int w);
int main(void){
    int j,l,o,i;
    int a,b,c,w;
    scanf("%d",&j);
    while(j--){

        scanf("%d%d",&n,&w);

        for(i=0;i<n;i++){
            for(o=1;o<=w;o++)
                C[i][o]=-1;
        }

        for(i=0;i<n;i++){

            scanf("%d%d%d",&a,&b,&l);

            p[i]=a*b;
           t[i]=l;

        }

        o=find_optimal(0,w);

        printf("%d\n",o);

    }
    return 0;
}

inline int max(int a,int b){
return a>=b?a:b;
}

int find_optimal(int i,int w){

    int a,b;



    if(i==n)
        return 0;
    if(w==0)
        return 0;

    if(C[i][w]!=-1)
        return C[i][w];


    a=find_optimal(i+1,w);
    b=a;
    if(w>=t[i]){
    b=p[i]+find_optimal(i+1,w-t[i]);
    }
    C[i][w]=max(a,b);

    return C[i][w];
}

