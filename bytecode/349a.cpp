#include<cstdio>
int main(void){
    int arr[100000],n,i,tf=0,fv=0,hu=0;
    bool flag=false;
    scanf("%d",&n);
    for(i=0;i<n;i++)    scanf("%d",arr+i);
    for(i=0;i<n;i++){
        if(arr[i]==25) tf++;
        else if(arr[i]==50){
            if(tf==0){flag=true;break;}
            else{tf--;fv++;}}
    else{
        if(tf==0){flag=true;break;}
        else if(fv==0){
            if(tf>=3){tf-=3;}
            else{flag=true;break;}}
        else{tf--;fv--;}}}
    if(flag) printf("NO\n");
    else  printf("YES\n");
    return 0;}
