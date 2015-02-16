#include <bits/stdc++.h>
char str [102];


void all3 (int st, int end) {
	for(int i=end-1;i>=st;i--) str[i] = '3';
}

bool increase (int i) {
	bool rem = true;
	while (rem && i>-1) {
		if (str[i]>='5') {
			// printf("OO");
			str[i] = '3';
			i--;
			continue;
		}
		if (str[i]>='3') str[i] = '5';
		else str[i] = '3';
		return false;
	}
	return true;
}

void solve () {
	scanf("%s", str);
	// printf("%s\t", str);
	char ch;
	int l = strlen(str);
	bool didN = true, flag;
	for (int i=0;i<l;i++) {
		ch = str[i];
		if(ch=='3' || ch=='5') {
			// printf("_");
			continue;
		}
		else if (ch>'5') {
			flag = increase (i-1);
			if(flag) printf("3");
			all3(i, l);
		}
		else if (ch=='4') {
			str[i] = '5';
			all3(i+1, l);
		}
		else if (ch<'3') {
			all3(i, l);
		}
		didN = false;
		break;
	/*	else {
			printf("_");
		}*/
	}
	if(didN) {
		// printf("FF");
		flag = increase(l-1);
		if(flag) printf("3");
	}
	printf("%s\n", str);
}

int main ()
{
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	int test;
	scanf("%d", &test);
	while ( test-- ) {
		solve();
	}
	return 0;
}