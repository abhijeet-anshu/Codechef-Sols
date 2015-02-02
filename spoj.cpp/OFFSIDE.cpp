#include <bits/stdc++.h>
int main(void) {
	int d_min, d_smin, var, k;
	int arr[11], barr[11];
	int a, d, i, flag;
	while (true) {
		scanf("%d%d", &a, &d);
		if(a==d && a==0) return 0;
		d_min = d_smin = INT_MAX;
		for(i=0;i<a;i++) scanf("%d", arr+i);
		k = -1;
		for(i=0;i<d;i++) {
			scanf("%d", &var);
			barr[i] = var;
			if (d_min>var) {d_min=var; k = i;}
		}
		for(i=0;i<d;i++) {
			if (d_smin>=barr[i] && k!=i) {d_smin=barr[i];}
		}
		flag = false;
		for(i=0;i<a;i++) {
			if(arr[i]>=d_smin) continue;
			flag = true;
			break;
		}
		if(flag) printf("Y\n");
		else printf("N\n");
	}
}
