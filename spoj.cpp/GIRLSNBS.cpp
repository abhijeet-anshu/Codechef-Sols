#include <bits/stdc++.h>
int a, b;
inline int swap() {a = a + b; b = a - b; a = a - b;}
int main(void) {
	while(true) {
		scanf("%d%d", &a, &b);
		if(a==-1 && b==-1) return 0;
		if(a<b) swap();
		if(a%(++b)==0) printf("%d\n", a/b);
		else printf("%d\n", a/b+1);
	}
}