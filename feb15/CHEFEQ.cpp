#include <bits/stdc++.h>
using namespace std;
#define IIMAP map<int, int>
void solve () {
	IIMAP pile;
	IIMAP::iterator it;
	int n, a, val; scanf("%d", &n);
	val = 1;
	for (int i=0;i<n;i++) {
		scanf("%d", &a);
		it = pile.find(a);
		if (it==pile.end()) {pile[a] = 1;}
		else {(*it).second = ((*it).second)+1; val = max(val, (*it).second);}
	}
	printf("%d\n", n-val);
}

int main () {
	/*freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);*/
	int test;scanf("%d", &test);
	while ( test-- ) solve();
	return 0;
}