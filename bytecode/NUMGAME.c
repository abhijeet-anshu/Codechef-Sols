#include<stdio.h>
#include<string.h>

int main()
{
	char *winner[]={"ALICE","BOB"};
//	winner[0]="ALICE";
//	winner[1]="BOB`";
	int t,n,m,swap,i,r;
	scanf("%d",&t);
	while(t--)
	{	
		swap=0;
		scanf("%d",&n);
		if(n==1) {printf("BOB\n");continue;}
		for(i=2;i<=n;i++)
		{
			m=n/i;
			r=n-m*i;
			if(r==0){
				n=n-m;i=1;	
				if(n==1){printf("%s\n",winner[swap]);break;}
				else swap=(swap+1)%2;
				}
			}
	}
return 0;
}

					
