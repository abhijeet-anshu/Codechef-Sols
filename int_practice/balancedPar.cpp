#include <cstdio>
#include <iostream>
#include <string>
#include <stack>
#define SC stack<char>
#define PUSH(a) mystack.push((a))
#define POP mystack.pop()
#define TOP mystack.top()
#define NEMPTY !mystack.empty()
using namespace std;

SC mystack;


void Sempty() {while(NEMPTY) {POP;}}

bool ParenTest(string str) {
	Sempty();
	int l = str.size();
	char ch;
	if(l==0) return true;
	PUSH('\0');
	for(int i=0;i<l;i++) {
		switch(ch=str.at(i)) {
			case '{':
			case '(':
			case '[':
				PUSH(ch);
				break;
			case '}':
				if (TOP!='{') return false;
				POP;
				break;
			case ']':
				if (TOP!='[') return false;
				POP;
				break;
			case ')':
				if (TOP!='(') return false;
				POP;
				break;
		}
	}
	if(TOP!='\0') return false;
	return true;
}
int main(void) {
	int t;
	string str;
	scanf("%d", &t);
	while(t--) {
		cin>>str;
		if(ParenTest(str)) printf("valid\n");
		else printf("invalid\n");
	}
}