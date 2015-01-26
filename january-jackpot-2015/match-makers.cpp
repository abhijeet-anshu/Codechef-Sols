#include <cstdio>
#include <algorithm>
#include <vector>
#define readI(a) scanf("%d", &a)
#define VEC vector<int>
#define PB1(a)  arr1.push_back(a)
#define PB2(a)  arr2.push_back(a)
#define SRT(a) sort (a.begin(), a.end())
#define CLR(a) a.clear()
using namespace std;
inline int Pmatch(int a, int b) {return (a%b==0 || b%a==0);}
int main() {
	VEC arr1; VEC arr2;
	int t, count, n, a;
	readI(t);
	while(t--) {
		readI(n);
		for(int i=0;i<n;i++) {readI(a);PB1(a);}
		for(int i=0;i<n;i++) {readI(a);PB2(a);}
		SRT(arr1);SRT(arr2);count = 0;
		for(int i=0, j=n-1;i<n && j>-1; i++, j--)
			{if(Pmatch(arr1.at(i), arr2.at(j))) count++;}
		printf("%d\n", count);
		CLR(arr2); CLR(arr1);
	}
	return 0;
}