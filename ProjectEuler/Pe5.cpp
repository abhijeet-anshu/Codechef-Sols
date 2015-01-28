#include <bits/stdc++.h>
#define LIM 20
#define LLD unsigned long long
using namespace std;
LLD arr[LIM+1];
int main (void) {
	LLD a = 2, b, c;
	arr[0] = arr[1] = false;
	memset(arr, 1llu, sizeof(arr));
	for(a=2;a<=sqrt(LIM);a++) {
		if(!arr[a]) continue;
		for(b=a*a;b<=LIM;b+=a) {arr[b] = false;}
	}
	LLD prod = 1llu;
	for(a=2;a<=LIM;a++) {
		if(arr[a]) {
			b = 0;
			c = a;
			while(c<=LIM) {prod *= a; c *= a; b++;}
			printf("%llu %llu %llu\n", a, c/a, prod);
		}
	}
	printf("%llu\n", prod);
}