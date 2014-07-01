#include<stdio.h>
int main(){
int t,n;
int A,carry;
int max;
int i,j;
int arr[200];
	scanf("%d",&t);
	while(t--){
		max=0;
		for(i=1;i<200;i++) arr[i]=0;
		arr[0]=1;
		scanf("%d",&n);
		for(i=2;i<=n;i++){	
			carry=0;
			for(j=0;j<=max;j++){
				A=arr[j]*i+carry;
				carry=A/10;
				arr[j]=A%10;
			}
			if(carry>0 && carry<10 ){max = max+1;arr[max]=carry;}
			else if(carry>=10 && carry < 100) {arr[max+2]=carry/10;arr[max+1]=carry%10;max=max+2;}
			else if(carry>=100) {max+=3;arr[max]=carry/100;arr[max-1]=carry/10;arr[max-2]=carry%10;}

		}
		for(i=max;i>=0;i--) printf("%d",arr[i]);
		printf("\n");
	}
return 0;
}

