#include <bits/stdc++.h>  
#define lng long long int 
int main(void){
	int t,N;
	lng start,end,div,a,root,ans,i,n,j,b;
//`	scanf("%d",&t);
	for(t=3;t<=2500;t++){
		n=t;
//		printf("n:%lld\n",n);
		root=ans=0;
		for(i=1;i<n;i++)//i in range(1,n):
		{
			a=i*(n-i)-1;
			while(root*root <a)
				root++;
			for(j=1;j<root;j++)//for j in range (1, root):
				ans=ans+a/j;
			div=a/root;
			start=root;
			while(div!=0){
				end=a/div;
				ans=ans+div*(end-start+1);
				start=end+1;
				div=a/start;
			}
		}
		printf("%lld,",ans);
	}
return 0;
}



