#include <bits/stdc++.h>  

int arr[100000];
int main(void){
  int n,i,last0,maxdiff,curdiff;
  scanf("%d", &n);
  for (i=0;i<n;i++)
    scanf("%d", arr+i);
    last0=-1;
    maxdiff=-1;
  for(i=0;i<n;i++) {
    if(arr[i]==0){
      curdiff=i-last0;
      last0=i;
      if(curdiff>maxdiff)
      	maxdiff=curdiff;
    }
  }
  curdiff=n-last0;  
  if(curdiff>maxdiff)
    maxdiff=curdiff;
  printf("%d\n",maxdiff-1);
  return 0;
}
