#include <bits/stdc++.h>  
#define slimit 3000
int Prime[slimit]={1,1,0};
void sieve(){
	int a=0,b;
	for(;a*a<=slimit;a++);
	int sqrt=a;
//	printf("sqrt :%d\n",sqrt);
	for(b=2;b<=sqrt;b++){
		if(Prime[b]==0)
		{	
			for(a=b*b;a<=slimit;a+=b)
				Prime[a]=1;
		}
	}
}

int main(void){
	int t,x,y,a,b;
	sieve();
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&x,&y);
		a=x+y;
		for(b=1;;b++){
			if(Prime[a+b]==0)
				break;
		}
		printf("%d\n",b);
	}
	return 0;
}
