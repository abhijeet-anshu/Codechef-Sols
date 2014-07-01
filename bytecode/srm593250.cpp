#include<cstdio>
#include<string>
using namespace std;
class RaiseThisBarn{
    public :
    int calc(string str){
        int n=str.size();
        int i,count=0,m=0,k=0;;
        for(i=0;i<n;i++){
            if(str.at(i)=='c')
                count++;
        }
        if(count==0)
            return n-1;
        if(count&1)
            return 0;
        count=count>>1;
        for(i=0;i<n;i++){ if(str.at(i)=='c')m++;if(m==count)break;}
        for(k=1;1;k++){i++;if(str.at(i)=='c')break;}
        return k;
    }

};
/*
int main(){
    RaiseThisBarn r;
    printf("%d\n",r.calc(".c.c...c..ccc.c..c.c.cc..ccc"));
    }
*/
