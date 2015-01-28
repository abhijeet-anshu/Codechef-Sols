#include <bits/stdc++.h>
#define LIM 1000000
#define LLD unsigned long long
LLD arr[LIM+1];
int main(void) {
	LLD a = 2, b, c;
	arr[0] = arr[1] = false;
	memset(arr, 1llu, sizeof(arr));
	for(a=2;a<=sqrt(LIM);a++) {
		if(!arr[a]) continue;
		for(b=a*a;b<=LIM;b+=a) {arr[b] = false;}
	}
	c = 0;
	for(a=2;a<=LIM;a++) {
		if(arr[a]) {c++; if(c==10001llu) break;}
	}
	printf("%llu\n", a);
}