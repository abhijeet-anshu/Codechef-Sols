#include<cstdio>
#include<algorithm>
using namespace std;
int main(void){
    int t,n,i;
    bool flag=false;
    int sword[100000],animal[100000];
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(i=0;i<n;i++)  scanf("%d",sword+i);
        for(i=0;i<n;i++) scanf("%d",animal+i);
        sort(sword,sword+n);
        sort(animal,animal+n);
        flag=true;
        for(i=0;i<n;i++){
            if(sword[i]<animal[i]){flag=false;break;}}
        if(flag) printf("YES\n");
        else printf("NO\n");
        }
        return 0;
    }

