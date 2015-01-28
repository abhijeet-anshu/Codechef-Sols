#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#define SC stack<char>
#define PUSH(a) mystack.push((a))
#define POP mystack.pop()
#define TOP mystack.top()
#define NEMPTY !mystack.empty()
#define ITER string::iterator
using namespace std;
string generateHigher(string str) {
	ITER it;
	int l = str.size(), i;
	if(l==1) return str;
	for (i=l-2;i>=0;i--) {
		if(str.at(i)<str.at(i+1)) {
			// find min to replace
			char ch = str.at(i+1);
			int mini;
			for(int j=i+2;j<l;j++) {
				if(str.at(j)<ch) {mini = j; ch = str.at(j);}
			}
			// swap mini and i
			ch = str.at(mini);
			str.at(mini) = str.at(i);
			str.at(i) = ch;
			i++;
			break;
		}
	}
	if (i<0 || i>=l) return str;
	sort(str.begin()+i, str.end());
	return str;
}
int main(void) {
	string str;
	int t; scanf("%d", &t);
	while (t--) {
		cin>>str;
		str = generateHigher(str);
		cout<<str<<endl;
	}
}