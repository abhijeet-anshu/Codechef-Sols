#include<cstdio>
#define ll unsigned long long
#define mod %1000000007
inline ll pow(ll a, ll n){
	if(n==0llu)
		return 1llu;
	else if(n&1llu){
		ll k=pow(a,(n>>1));
		k=k * k mod;
		k= k*a mod;
		return k;
	}
	else {
		ll k=pow(a,(n>>1));
		k=k * k mod;
		return k;
	}
}


// 10.19 = 2 *[(5 10.18)=((25 10.17)*2*2)

int main(void){	
	ll n=625000000000000000llu,k;
	int arr[100],t,l,i;
	bool flag;
	ll ans= pow(2,n),abhi;
	ans=ans*ans mod;
	ans=ans*ans mod;
	ans=ans*ans mod;
	ans=ans*ans mod;
	scanf("%d",&t);
	while(t--){
		flag=false;
		scanf("%llu",&n);
		l=0;
		while(n){
		k=n&1;
		n=n>>1;
		arr[l]=(int)k;
		l++;
		}
		l--;
		n=0;
		if(l>18){
			l--;
			flag=true;
		}
		for(i=l;i>=0;i--){
			n=n*10llu + arr[i];
			}
		abhi=pow(2,n);
		if(flag)
		abhi=abhi*ans mod;
		abhi= abhi*abhi mod;		
		printf("%llu\n",abhi);
	}
	return 0;
}
