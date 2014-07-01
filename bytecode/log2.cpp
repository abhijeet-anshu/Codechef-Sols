#include<cstdio>

int main(){
int l=63,log=0;
while(l>>=1){
log++;
}
printf("%d\n",log);

}
