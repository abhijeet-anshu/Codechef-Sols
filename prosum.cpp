#include <bits/stdc++.h>
#define UL long long int
int arr[100001];
UL count2[100001],n,count1[100001];
int main(void){
	int t,i;
	UL ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		ans=n*(n-1)/2;
		for(i=0;i<n;i++)
			scanf("%d",arr+i);
			count2[n-1]=  (arr[n-1]<=2) ?  1 : 0;
			count1[n-1]=(arr[n-1]<=1)? 1: 0;
		for(i=n-2;i>=0;i--){
			count2[i]= (arr[i]<=2) ? count2[i+1]+1:count2[i+1];
			count1[i]= (arr[i]<=1) ? count1[i+1]+1:count1[i+1];
		}
		for(i=0;i<n;i++){
			if(arr[i]==1 || arr[i]==0)
				{ans=ans-n+i+1;
				//printf("ans: %lld-%lld\n",ans,)
				}
			else if(arr[i]==2)
				ans=ans-count2[i]+1;
			else 
				ans=ans-count1[i];
				
		}
		printf("%lld\n",ans);
	}
	return 0;
}
