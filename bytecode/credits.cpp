#include<cstdio>
#include<cstring>
struct subject{
    char name[51];
    int c;
    int d;
    void input(){
        scanf("%s%d%d",name,&c,&d);
    }
};
int i,x;
typedef struct subject subject;
int main(void){
    int i,j;
    char *name[100];
    int n,t,pow;
    scanf("%d",&n);
    t=n;
    subject *arr=new subject[t];
    subject *pref=new subject[t];
    for(i=0;i<n;i++){
        arr[i].input();
    }
    scanf("%d",&x);
    t=n;
    while(t--){
        scanf("")
    }
    pow=1<<n;
    for(i=1;i<=pow;i++){
        for(j=1;j)
    }
}
