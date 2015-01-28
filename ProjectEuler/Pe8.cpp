#include <bits/stdc++.h>
#define LIM 1000000
#define LLD unsigned long long

char str[1001];
LLD num(char ch) {return (LLD)(ch-'0');}
LLD product13(int index) {
	LLD prod = 1;
	for(int i=index;i<index+13;i++) {prod *= num(str[i]);}
	return prod;
}
LLD Max(LLD a, LLD b) { return a>=b?a:b;}
// string str;
int main(void) {
	freopen("in8Problem.txt", "r", stdin);
	scanf("%s", str);
	assert(strlen(str)==1000);
	LLD ma = 0;
	// 1000-13 = 987
	for(int i=0;i+12<1000;i++) {
		ma = Max(product13(i), ma);
	}
	printf("%llu\n", ma);
	return 0;
}