#include <cstdio>
#include <vector>
#define VI vector<int>
#define IT vector<int>::iterator
#define PB(b) arr.push_back((b))
using namespace std;
int process(VI arr) {
	int n = arr.size();
	int sum = 0, diff, count, cn;
	for(int i=0;i<n;i++) sum += arr[i];
	if(sum%n!=0) {
		printf("NO\n");
		return -1;
	}
	sum /= n;
	cn = count = 0;
	for(int i=0;i<n;i++) {
		diff = arr[i] - sum;
		if (arr[i]>sum) count++;
		else if (arr[i]<sum) {cn++; diff = -diff;};
		if (diff%3!=0) {
			printf("NO\n");
			return -1;
		}
	}
	if(cn>count) count = cn;
	printf("YES %d\n", count);
	return 1;
}		
int main (void) {
	int t, n, i;
	IT abc;
	VI arr;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		arr = VI(n);
		for(i=0;i<n;i++)
			scanf("%d", &arr[i]);
		process(arr);
	}
}