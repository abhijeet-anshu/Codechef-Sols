#include<cstdio>
#include<algorithm>
int mina,minb,minc;
int maxa,maxb,maxc;
const int n=1000;
int arr[n];
int main(void){
    //int arr[1000000];
    int i,j,k,max;
    int a,b,c,m;
    //maxa=34+100000000;
    maxa=rand()%100+100000000;
    mina=maxa-n+1;
    printf("range:\nmin:\t%d\nmax:\t%d\n",mina,maxa);

    for(i=0;i<n;i++){
        arr[i]=mina;
        mina++;
    }

    a=0;b=1;c=2;
    max=arr[0]^arr[b]^arr[c];
    for(i=0;i<n-2;i++){
        for(j=i+1;j<n-1;j++){
            for(k=j+1;j<n;k++){
               m=arr[i]^arr[j]^arr[k];
               if(m>max){
                max=m;
                a=i;
                b=j;
                c=k;
               }
            }
        }
    }
    printf("maximum xor %d\t at %d ^ %d ^ %d",arr[a],arr[b],arr[c]);

}
