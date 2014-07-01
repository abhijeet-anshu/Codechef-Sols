#include <bits/stdc++.h>  
#define maxn 100000
int sum[maxn][10]={0};
char str[maxn];
int arr[maxn];
int ans[maxn];
int main(void){
	int n,m,i,j,val;
	scanf("%d%d",&n,&m);
	scanf("%s",str);
	for(i=0;i<n;i++)
		arr[i]=str[i]-'0';
	// preprocessing step
		for(i=1;i<n;i++)
		{
			val=arr[i-1];
			for(j=9;j>val;j--)	
				sum[i][j]=sum[i-1][j]+(j-val);
			for(j=0;j<val;j++)
				sum[i][j]=sum[i-1][j]+(val-j);	
			sum[i][val]=sum[i-1][val];
		}
		ans[0]=0;
		for(i=1;i<n;i++){
			val=arr[i];
			ans[i]=sum[i][val];
		}
// preprocessing done 
	// answer the queries now
	while(m--){
		scanf("%d",&i);
		printf("%d\n",ans[i-1]);
	}
	return 0;
}
