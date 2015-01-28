#include <cstdio>
#include <stack>
#include <vector>
#include <algorithm>
#define SI stack<int>
#define VI vector<int>
#define readI(a) scanf("%d", &a)
#define forin for(i=0;i<n;i++)
#define TOP mystack.top()
#define POP mystack.pop()
#define PUSH(a) mystack.push((a))
#define NEMPTY !mystack.empty()
using namespace std;
SI mystack;
void clearS() {while(NEMPTY) mystack.pop();}
int main(void) {
	int n, a, b, i, *arr;
	int seen, need;
	while (true) {
		readI(n);
		if(n==0) return 0;
		arr = new int[n];
		forin {readI(a); arr[i] = a;}
		seen = 0;
		clearS(); PUSH(n+1);
		b = 1;
		forin {
			need = seen+1;
			// printf("%d %d %d\n", arr[i], need, TOP);
			if(arr[i]==need) {seen=need; continue;}
			else if (need==TOP) { seen = need; POP; i--;}
			else if (arr[i]>TOP) {b = 0; break;}
			else {PUSH(arr[i]);}
		}
		if(b) printf("yes\n");
		else printf("no\n");
	}
}
