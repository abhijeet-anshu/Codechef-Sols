#include <bits/stdc++.h>  
#define loge9 31
int main(void){
	int A[30],B[30];
	int a,b;
	int t,x,y,i,j,ans;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&x,&y);
		a=b=1;
		A[0]=x;
		B[0]=y;
		while(x>0){
			assert(a<loge9);
			A[a]=x;
			x>>=1;
			a++;
		}
		while(y>0){
			assert(b<loge9);
			B[b]=y;
			y>>=1;
			b++;
		}
		i=a-1;
		j=b-1;
		while(A[i]==B[j]){
			i--;
			j--;
			if(i==0)
				break;
		}
		printf("%d\n",i+j);
	}
	return 0;
}
