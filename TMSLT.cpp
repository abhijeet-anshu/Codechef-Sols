#include <bits/stdc++.h>
#define UL long long
#define million 1000000
int freq[million];
int main(void){
	int t,n,m,max,min,i;
	int a,b,c,d,lodd;
	UL s;
	scanf("%d",&t);
	while(t--){
		memset(freq,0,sizeof(freq));
		scanf("%d%d%d%d%d",&n,&a,&b,&c,&d);
		s=d;
		freq[d]++;
		max=d;
		min=d;
		for(i=1;i<n;i++){
			d=s= (a*s*s  + b*s + c)%million;
			freq[d]++;
			max=max>d?max:d;
			min=min<d?min:d;
		}
		i=min;
		lodd=0;
		d=0;
		while(max>=i){
			a=freq[i];
			if(a&1){
				if(lodd){
					d-=i;
					lodd=0;
					}
				else{
					d+=i;
					lodd=1;
					}
				}
			i++;
		}
		d=d>=0?d:-d;
		printf("%d\n",d);
	}
	return 0;
}

