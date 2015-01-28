#include <bits/stdc++.h>
using namespace std;
int main (void) {
	int n, rev, a, l;
	scanf("%d", &n);
	rev = 0;
	l = 0;
	string str;
	while (n>0) {
		 str.push_back(n%10+'0');
		n =n/10;
		l++;
	}
	reverse (str.begin(), str.end());
	printf ("%s\n", str.c_str());
}