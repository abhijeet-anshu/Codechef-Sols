#include<stdio.h>
#include<stdlib.h>
#define take2input scanf("%d%d",
#define print printf("%d",

typedef int  atyp;
typedef struct Point pt;
struct Point{
	atyp x;
	atyp y;
};

int main(){
	int t,n,i;
	pt *A;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		A=(pt*)malloc((n+1)*sizeof(A));
		for(i=1;i<=n;i++)
			take2input &((A[i]).x),&((A[i]).y));
		
		}


}
