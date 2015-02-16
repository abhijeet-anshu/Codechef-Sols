#include <bits/stdc++.h>
const int lim = 100000;
const int sq_lim = 316;
int n_prime[lim+1];
int main (void) {
	memset(n_prime, 0, sizeof(n_prime));
	n_prime[0] = n_prime[1] = 0;
	int p, a, cnt, k, t;
	for (p=2;p<lim;p++) {
		if(n_prime[p]==0) {
			for(a=p;a<=lim;a+=p) n_prime[a]++;
		}
	}
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d%d", &a, &p, &k);
		cnt = 0;
		assert(p<=lim);
		while(a<=p) if(n_prime[a++]==k) cnt++;
		printf("%d\n", cnt);
	}
	return 0;
}