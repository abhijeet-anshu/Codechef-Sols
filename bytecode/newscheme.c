#include<stdio.h>
#define mod 1000000007

mult(unsigned long long int a[2][2],unsigned long long int b[2][2],unsigned long long int P[2][2]){
		P[0][0]=(a[0][0]%mod*b[0][0]%mod + a[0][1]%mod*b[1][0]%mod)%mod;
                P[0][1]=(a[0][0]%mod*b[0][1]%mod + a[0][1]%mod*b[1][1]%mod)%mod;
                P[1][0]=(a[1][0]%mod*b[0][0]%mod + a[1][1]%mod*b[1][0]%mod)%mod;
                P[1][1]=(a[1][0]%mod*b[0][1]%mod + a[1][1]%mod*b[1][1]%mod)%mod;
}


matexponent(unsigned long long int A[2][2], unsigned long long int n,unsigned long long int P[2][2])
{
unsigned long long int k[2][2],l[2][2];
	if(n==0){
		P[0][0]=1;
		P[0][1]=0;
		P[1][0]=0;
		P[1][1]=1;
		return 0;
		}
	else if(n==1){
		P[0][0]=A[0][0];
                P[0][1]=A[0][1];
                P[1][0]=A[1][0];
                P[1][1]=A[1][1];
		return 0;
	}
	else if((n&1)==1)
	{
		matexponent(A,n/2,k);
		mult(k,k,l);
		mult(l,A,P);
		return 0;
	}
	else
	{
		matexponent(A,n/2,k);
		mult(k,k,P);
		return 0;

	}
}

main(){
int t;
unsigned long long int M[2][2],P[2][2];
unsigned long long int ans,n;
M[0][0]=2;
M[0][1]=3;
M[1][0]=1;
M[1][1]=0;

scanf("%d",&t);
	while(t--){
		scanf("%llu",&n);
		if(n==2){printf("%d\n",12%mod); continue;}
		else if(n==3){printf("%d\n",24%mod);continue;}
		else{
			matexponent(M,n-3,P);
			ans =	(( (P[0][0])%mod *24)%mod + ( (P[0][1])%mod *12)%mod)%mod;
			printf("%llu\n",ans);
		}
	}
return 0;
}
