#include <bits/stdc++.h>
using namespace std;

bool isPalin(int p) {
	string str, astr;
	while(p) {
		str.push_back(p%10); p /= 10;
	}
	astr = str;
	reverse(astr.begin(), astr.end());
	if(str==astr) return true;
	return false;
}

int maxNum(int a, int b) {return a>b?a:b;}

int main() {
	int a, b, prod, max;
	max = -1;
	for(a=100; a<=999; a++) {
		for(b=a; b<=999; b++) 
		{
			prod = a * b;
			if(isPalin(prod)) { 
				// printf("%d %d = %d \n", a, b, prod); 
				max = maxNum(prod, max);
			}
		}
	}
	printf("%d\n", max);
	return 0;
}
