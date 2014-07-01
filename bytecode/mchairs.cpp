#include<cstdio>
#define ll long long
#define mod %1000000007
ll pow(ll a, int n){
	if(n==0)
		return 1;
	else if(n&1){
		ll k=pow(a,n>>1);
		k=k * k mod;
		k= k*a mod;
		return k;
	}
	else {
		ll k=pow(a,n>>1);
		k=k * k mod;
		return k;
	}
}


int main(void){
	int t;
	ll a;
	int n;
	
	scanf("%d",&t);
	
	while(t--){
		scanf("%d",&n);
		printf("%lld\n",(pow(2,n))-1);
	}
	return 0;
}
