#include<cstdio>
#define lim 1000001
int sieve[lim]={1,1};

int no_div(int num){
	if(num==1)
		return 1;
	if(sieve[num]==0)
		return 2;
	int i,count=0;;
	for(i=2;i*i<=num;i++){
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
	
	int n=100;
	for(i=2;i<=n;i++){
		if(sieve[no_div(i)]==0)
			printf("%d:: %d\n",i,count++);
	}
	return 0;
}
