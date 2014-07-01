#include <bits/stdc++.h>  
char str[1000002], word[4],c,d;
char rule[127];
int main(void){
 int n,t,l,i,a,b;
 int dotCount;
 scanf("%d",&t);
 while(t--) {
   dotCount=0;
   scanf("%d",&n);
   for(i=33;i<127;i++)
     rule[i]=0;
   for(i=0;i<n;i++){
     scanf(" %c %c",&c,&d);
     assert(c<127 && c>32);
     assert(d>32 && d<127);
     rule[c]=d;
   }
   scanf("%s", str);
   l=strlen(str);
   for(i=0;i<l;i++) {
     c=str[i];
     d=rule[c];
     if(d)// !=0
       str[i]=d;
     if(str[i]=='.')
       dotCount++;
   }
   assert(dotCount<2);
   for(a=0;a<l;a++){
     if(str[a]!='0')
       break;
   }
   //assert(a<l);
   if(a==l){
     printf("0\n");
     continue;
   }
   b=l-1;
   if(dotCount){
     for(;b>=0;b--){
       if(str[b]!='0')
         break;
     }
   }
   assert(b>-1);
   if(a==b && str[a]=='.'){
     a=0;
     b=0;
     str[0]='0';
     //assert(0);
   }
   else if(str[b]=='.')
     b--;
   str[b+1]=0;
   printf("%s\n",str+a);
 }
  return 0;
}
