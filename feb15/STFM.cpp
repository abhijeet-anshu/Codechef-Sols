#include <bits/stdc++.h>
#define LLU unsigned long long int
const int P_LIMIT = 100000;
const int M_LIMIT = 10000000;
LLU p_array[P_LIMIT];
LLU v_array[M_LIMIT];
LLU f_array[M_LIMIT];

void solve () {
	LLU m, a, b, ans, p;
	int n, i;
	scanf ("%d%llu", &n, &m);
	f_array[0] = 1;
	v_array[0] = 0;
	for (i=1;i<m;i++) {
		f_array[i] = (i * f_array[i-1] % m);
		v_array[i] = ((i * f_array[i] % m) + v_array[i-1])%m;
	}
	for (i=0;i<n;i++) scanf("%llu", p_array+i);
	ans = 0;
	for (i=0;i<n;i++) {
		p = p_array[i];
		if(p==m) continue;
		if(p<m) {
			ans = (ans + v_array[p])%m;
		}
		else {
			ans = (ans + v_array[m-1])%m;	
		}
		if ((p&1)==0LLU) {a = p>>1; b = p + 1;}
		else {b = p+1>>1; a = p;}
		p = p%m;
		a = a%m;
		b = b%m;
		ans = (ans + (((p*a)%m)*b%m))%m;
	}
	printf("%llu\n", ans);
}

int main () {
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	solve();
	return 0;
}