#include<stdio.h>
#include<stdlib.h>
main(){

int *p;
int n;
printf("Enter Array size");
scanf("%d",&n);
p=(int *)malloc(n*sizeof(int));
free(p);
p=&n;
int a[9];
a=&n;
}

