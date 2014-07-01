#include<cstdio>
#include<cstring>
int arr[26]={0};
int main(void){
    char ch,str[1001];
    int t,n,i,k;
    scanf("%d",&t);
    while(t--){

        scanf("%s",str);
        n=strlen(str);
        printf("lenghth :%d\n",n);

        for(i=0;i<n;i++)
            arr[i]=0;
        for(i=0;i<n;i++){
            k=(int) (str[i]-'a');//]++;
            arr[k]++;
        }
        for(i=0;i<26;i++){
            if((arr[i]&1)==1){
                ch=i+'a';
                while(arr[i]--){
              printf("%c",ch);
                }
            }
        }

        for(i=0;i<26;i++){
                if(arr[i]>0)
                    ch=i+'a';{
                while(arr[i]--){
                   printf("%c",ch);
                }
                }
            }
        printf("\n");
        }

return 0;
    }

