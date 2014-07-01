#include<cstdio>
#define vali arr[i]
#define avoid -2
#define zero  1000000
#define limit 100000


int main(void){
    int n,i,x[100001]={0},arr[100000],lastfound[100001],count;
    scanf("%d",&n);count=0;
    for(i=0;i<n;i++){scanf("%d",&vali);x[vali]=-1;lastfound[i]=-1;}
    for(i=0;i<n;i++){
        if(x[vali]==-2)// implies not the correct x
            continue;
        if(x[vali]==-1) {x[vali]=zero;count++;}// zero implies visited first
        else if(x[vali]==zero) x[vali]=i-lastfound[vali]; // implies visited twice save the common difference
        else if(x[vali]>0){//now visited atleast thrice check the common difference
            if(i-(lastfound[vali])!=x[vali]){ x[vali]=-2; count--;continue;} // c.d. not same
        }
        lastfound[vali]=i;
        }
        printf("%d\n",count);
    for(i=1;i<=limit;i++){
        if(x[i]==zero){
            printf("%d 0\n",i);
        }
        else if(x[i]>0)
            printf("%d %d\n",i,x[i]);
    }
    return 0;
}

