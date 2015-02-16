#include <bits/stdc++.h>
char str [100001];
const char MIN = '-';
const char PLUS = '+';

int runLoop (char expStart) {
	char expc, curr;
	int a = 0, l = strlen(str);
	for (int i=0;i<l;i++) {
		curr = str[i];
		if(curr!=expStart) a++;
		if (expStart==MIN) expStart = PLUS;
		else expStart = MIN;
	}
	return a;
}

void solve () {
	scanf ("%s", str);
	printf("%d\n", std::min(runLoop(MIN), runLoop(PLUS)));
}

int main ()
{
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	int test;scanf("%d", &test);
	while ( test-- ) solve();
	return 0;
}