#include<cstdio>
#define lim 1000001
#define ll unsigned long long
int sieve[lim]={1,1};

int no_div(ll num){
	if(num==1)
		return 1;
	//if(sieve[num]==0)
	//	return 2;
	ll i;
	int count=0;;
	for(i=2llu;i*i<=num;i++){
		if(num%i==0)
			count++;
	}
	//count++;
	return count+2;
}

int main(void){
	int i,j,count=1;;
	for(i=1;i<=1000;i++){
		if(sieve[i]==0){
			for(j=i*i;j<=lim;j++)
				sieve[j]=1;
		}
	}
	
	ll n=1000000000000llu;
	ll I;
	for(I=2;I<=n;I++){
		if(sieve[no_div(I)]==0)
			count++;
	}
	printf("%d\n",count);
	return 0;
}
