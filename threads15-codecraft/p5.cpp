#include <cstdio>
using namespace std;
char str[14];
int main() {
	int t, a, b;
	scanf("%d", &t);
	while(t--) {
		scanf("%d%s%d", &a, str, &b);
		b = (b-1)<<1;
		if(str[0]=='e') b+=1;
		else b+= 2;
		printf("%d\n", b);
	}
	return 0;
}