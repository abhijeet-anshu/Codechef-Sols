#include <bits/stdc++.h>
using namespace std;
int main(void) {
	int n;scanf("%d", &n);
	if(n%10==0) {printf("2\n");}
	else {printf("1\n%d\n", n%10);}
}