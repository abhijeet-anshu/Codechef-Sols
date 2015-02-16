#include <bits/stdc++.h>
using namespace std;
char a[50001], b[50001];
int main (void) {
	int t; scanf("%d", &t);
	int i, flag;
	while (t--) {
		scanf("%s%s", a, b);
		sort(a, a+strlen(a));
		sort(b, b+strlen(b));
		flag = true;
		for (i=0;i<strlen(a);i++) {
			if(a[i]!=b[i]) {flag=false; break;}
		}
		if(flag) {printf("YES\n");}
		else {printf("NO\n");}
	}
	return 0;
}