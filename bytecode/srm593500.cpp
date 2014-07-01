#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
class WolfDelaymaster{
    public:
    string check(string str){
        int n=str.size();
        int w,o,l,f,i;
        int phase=0;
        w=o=l=f=0;

        for(i=0;i<n;i++){
            if(str.at(i)=='w') {
                if(phase == 0) w++;
                else return "INVALID";
            }
            else if(str.at(i)=='o'){
                if(phase==0) phase=1;
                else if(phase!=1) return "INVALID";
                o++;
            }
            else if(str.at(i)=='l'){
                if(phase==1){if(w!=o)return "INVALID"; phase=2;}
                else if(phase!=2) return "INVALID";
                l++;
            }
            else if(str.at(i)=='f'){
                if(phase==2){
                        if(o!=l)
                            return "INVALID";
                    phase=3;}
                else if(phase != 3)
                    return "INVALID";
                f++;
                if(f==l){
                    phase=0;w=o=l=f=0;}
            }
            else {
                return "INVALID";
            }
        }
            if((w!=o)||(o!=l))
                return "INVALID";
            else if(l!=f)
                return "INVALID";
           return "VALID";
    }
};
/*
int main(void){
    WolfDelaymaster k;
    cout<<k.check("simmi");
}
*/
