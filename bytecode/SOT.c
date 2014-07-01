#include<stdio.h>
#define M 6000
int a[M],s[M];
int N;
int max;
main(){
	int i,t,k;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&N);
		max=N*(N+1)/2;
		for(i=1;i<=max;i++)	{scanf("%d",a+i);s[i]=-1;}
		k=sum(1,1);
		printf("%d\n",k);
	}
return 0;
}

int sum(int n,int k){
	int i=n*(n-1)/2+k;
	int x,y;
	
	if(n==N)	s[i]=a[i];
	else if(s[i]==-1){
		x=sum(n+1,k);
		y=sum(n+1,k+1);
		s[i]=a[i]+(x>y?x:y);
	}

	return s[i];
}

		


		
