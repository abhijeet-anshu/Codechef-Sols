#include<stdio.h>
int main(){
	int t,n, p,q,s;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		s=0;
		for(p=1;p<n;p++){
			for(q=p+1;q<=n;q++){
				if(p==1)s++;
				else if(q%p)	{	s++;continue;	}
						}
		}
	printf("%d\n",s);
}
return 1;
}
