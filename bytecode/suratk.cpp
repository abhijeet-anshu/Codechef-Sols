#include<cstdio>
#include<cstring>
int arr[26]={0};
int main(void){
    char ch,str[10001];
    int t,n,i,k,a,b;
    scanf("%d",&t);
    while(t--){

        scanf("%s",str);
        n=strlen(str);
        for(i=0;i<26;i++)
            arr[i]=0;
        for(i=0;i<n;i++){
            k=(int) (str[i]-'a');//]++;
            arr[k]++;
        }
        for(i=0;i<26;i++){
            a=arr[i];
            if((a&1)==1){
                ch=i+'a';
                while(a--){
              printf("%c",ch);
                }
                arr[i]=0;
            }
        }

        for(i=0;i<26;i++){
                a=arr[i];
                if((a&1)==0){
                    ch=i+'a';
                while(a--){
                   printf("%c",ch);
                }
                arr[i]=0;
                }
            }
        printf("\n");
        }

return 0;
}
