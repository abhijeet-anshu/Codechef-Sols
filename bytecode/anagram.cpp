#include<cstdio>
#include<cstring>
int main(void){
    char astring[100001],bstring[100001];
    int Barray[26]={0};
    int arr[100000];
    int minop=0,n,l,i,k,j;
    scanf("%s",astring);
    scanf("%s",bstring);
    l=strlen(astring);
    for(i=0;i<l;i++){
        k=bstring[i]-'A';
        Barray[k]++;
    }
    for(i=0;i<l;i++){
        k=astring[i]-'A';
        if(Barray[k]>0){
            Barray[k]--;
        }
        else{
            astring[i]=0;
            minop++;
        }
    }
    printf("%d\n",minop);
    j=0;
    for(i=0;i<26;i++){
        while(Barray[i]>0){
            printf("%c in buffer\n",i+'A');
            arr[j++]=i;
            Barray[i]--;
        }
    }// arr filled upto j-1
    k=0;
    for(i=0;i<l;i++){
        if(astring[i]==0){
            printf("%c",arr[k++]+'A');
        }
        else{
            printf("%c",astring[i]);
        }
    }
    printf("\n");
}


