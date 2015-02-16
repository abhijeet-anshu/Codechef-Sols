#include <bits/stdc++.h>
#define LLU unsigned long long int
void solve () {
	LLU n, s, m, ans;
	scanf ("%llu%llu", &n, &s);
	m = (n*(n+1)>>1) - s;
	if (m==0) {printf("0\n"); return;}
	ans = 1;
	while (m>--n) {m -= n; ans++;}
	printf("%llu\n", ans);
}

int main () {
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	int test;scanf("%d", &test);
	while ( test-- ) solve();
	return 0;
}