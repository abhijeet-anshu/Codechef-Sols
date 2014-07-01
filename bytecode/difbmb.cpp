#include<cstdio>
#define max 40000

int arr[max]={1,1,0};

int main(void){
	int i,j,t,a,b,count,flag;
	for(i=2;i<=200;i++){
		if(arr[i]==0)
		for(j=i*i;j<=max;j+=i)
			arr[j]=1;
		}
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&a,&b);
		count=0;
		for(i=a;i<=b;i++){
                if(i==1)
                    continue;
                if(i==2){
                    count++;
                    continue;
                }

			if(i<=4000){
				if(arr[i]==0){// o(1) time
					if(i%4==1)
						count++;
					}}
			else{
				if(i%4!=1)
					continue;
				flag=1;
				for(j=2;j*j<=i;j++){
					if(i%j==0){
						flag=0;
						break;
					}
				}
				if(flag)
					count++;
				}
			}
			printf("%d\n",count);
		}
}




