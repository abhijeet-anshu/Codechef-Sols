#include<stdio.h>
#include<string.h>

int main(){
int t,A[8],B[300],a,b;
char Astr[7],Bstr[251];
int i;
int m,n;
scanf("%d",&t);
while(t--)
{
	scanf("%s%s",Astr,Bstr);
	m=strlen(Astr);
	n=strlen(Bstr);
//	First length is m and second Length is n);

	for(i=1;i<=n;i++)
		B[i]=Bstr[i-1]-'0';
	a=0;
	for(i=0;i<m;i++){
		A[i+1]=Astr[i]-'0';
		a=a*10+Astr[i]-'0';
	}
	printf("A is %d\n",a);
	for(i=1;i<=m;i++)
		printf("%d",A[i]);
	printf("\n");
}
}	
