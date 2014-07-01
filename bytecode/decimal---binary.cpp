#include<cstdio>

int main(void){
	int n,i,k,l;
	char arr[1000000];
	scanf("%d",&n);
	l=0;
	while(n){
		k=n%2;
		n=n/2;
		arr[l]=k+'0';
		l++;
	}
	l--;
	for(i=l;i>=0;i--){
		printf("%c",arr[i]);
	}
	printf("\ndigits :: %d\n",l+1);
	return 0;
}


//600 000  1 001 001 001 111 100 000 0
