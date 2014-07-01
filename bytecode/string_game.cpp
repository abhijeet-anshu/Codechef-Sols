#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main(void){
    while(true){
        string a,b,c;
        cin>>a>>b;
        if(a==b){
            printf("equal\n");
            c=a.substr(0,0);
        }
        else
            printf("not equal\n");
    }
return 0;
}
