#include<cstdio>
#include<cstring>
#define limit 200
#define ull unsigned long long
int main(void){
	int arr[limit];
	char str[limit];
	int t,l,i,j;
	ull ans,base,curr_value,k;
	scanf("%d",&t);
	while(t--){
		scanf("%s",str);
		l=strlen(str);
		if(l==1){
			printf("1\n");
			continue;
			}
		for(i=0;i<limit;i++)
			arr[i]=-1;
		k=str[0];
		arr[k]=1;
		//printf("%d\n",k);
		j=0;
		base=1;
		for(i=1;i<l;i++){
			k=str[i];
			if(arr[k]==-1){
				arr[k]=j++;
				if(j==1)
                    j=2;
                    base++;
				//printf("%d\n",k);
		//		printf("%d ",j);
			}
		}
		ans=0;
		curr_value=1;
		if(base==1)
            base=2;
		//base=j+1;
		//printf("\nbase:%llu\n",base);
		for(i=l-1;i>=0;i--){
			k=str[i];
			ans=ans+curr_value*(arr[k]);
			//printf("assigning %c value %d and current value %llu\n",str[i],arr[k],curr_value);
			curr_value=curr_value*base;
			}
		printf("%llu\n",ans);
	}
return 0;
}

