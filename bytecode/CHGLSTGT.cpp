#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
int dp[5001][5001];
int inf=1000000000,n;
bool ispalin[5000][5000];

int main(void){
    int t;
    int i,j,k;
    bool flag,flag1;
    char str[5001];
    string arr,bc,cb;
    scanf("%d",&t);
    while(t--){
        flag=false;
        scanf("%d",&n);
        for(i=0;i<n;i++){
            for(j=0;j<n;j++)
                dp[i][j]=-1;
        }

        scanf("%s",str);
        arr=str;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++)
                ispalin[i][j]=false;
        }
        for(i=0;i<n;i++){
            ispalin[i][i]=true;
            j=i-1;
            k=i+1;
            while(j>=0 && k<n){
                if(str[j]==str[k]){
                   ispalin[j][k] =true;
                }
                else
                    break;
                j--;
                k++;
            }
            j=i;
            k=i+1;
            while(j>=0 && i<n){
                if(str[j]==str[k]){
                   ispalin[j][k] =true;
                }
                else{
                    break;
                }
                j--;k++;
            }
        }
        int nipun,chhat;
        dp[n-1][n-1]=1;
        for(i=n-2;i>=0;i--){
            if(ispalin[i][n-1]){
                dp[i][n-1]=1;
            }
            else
                dp[i][n-1]=inf;
            for(j=n-2;j>=i;j--){
                dp[i][j]=nipun=chhat=dp[i][j+1];
                if(ispalin[i][j]){
                    chhat=1+dp[j+1][j+1];
                }
                if(chhat<nipun)
                    dp[i][j]=chhat;

            }
        }
        printf("%d\n",dp[0][0]);
    }
    return 0;
}


