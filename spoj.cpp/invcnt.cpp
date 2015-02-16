#include <bits/stdc++.h>
#define LLD long long int
const LLD zero = 0LL;
LLD ans;
int A [200000];
int LA [100002];
int RA [100002];

void copyArrays(int *arr, int l, int r) {
	int i = 0;
	while(l<=r) arr[i++] = A[l++];
	arr[i] = INT_MAX;
}

void MG_Partition(int l, int q, int r) {
	int la = q - l + 1;
	int ra = r - q;
	copyArrays(LA, l, q);
	copyArrays(RA, q+1, r);
	int i = 0, j = 0;
	for(int k = l; k<=r; k++) {
		if (LA[i]>RA[j]) {
			ans += (LLD)(la - i);
			A[k] = RA[j++];
		}
		else A[k] = LA[i++];
	}
}

void MG_Sort(int l, int r) {
	if (l>=r) return;
	int q = l + r >>1;
	MG_Sort(l, q);
	MG_Sort(q+1, r);
	MG_Partition(l, q, r);
}

int main (void) {
	int n, t, i;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		ans = zero;
		for(i=0;i<n;i++) scanf("%d", A+i);
		MG_Sort(0, n-1);
		printf("%lld\n", ans);
	}
	return 0;
}