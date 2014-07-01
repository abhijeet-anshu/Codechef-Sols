#include<stdio.h>
#define m 256

int bin(int num);


main(){
	int y;
	int k,arr[15],sor=0;
	int xorbank[105],xorcounter=-1,ixor;
	int i=1,h,l,j,lo;
	arr[0]=1;
	int flag=0;
		for(j=2;j<m;j++)
			{
			ixor=0;
			if(sor==14) break;
			flag=0;
			for(h=0;h<=sor;h++){
				k=j^arr[h];
				for(i=0;i<=xorcounter;i++)
				{
					if(k==xorbank[i]){flag=1;break;}						
				}
				for(lo=0;lo<=sor;lo++)
                                {
                                if(arr[lo]==k){flag=1;break;}
                                }

				if(flag){break;}
				else {xorcounter++; ixor++;xorbank[xorcounter]=k;}
				}
			if(flag) {xorcounter-=ixor;continue;}	
			sor++;
			arr[sor]=j;
			}



// OUTPUT*****************************************************
	for(j=0;j<15;j++){
		printf("%d\n",arr[j]);
		bin(arr[j]);}
//***********************************************************
// CHECKING
	int w[m];
	for(i=0;i<m;i++)
		w[i]=0;

	for(i=0;i<15;i++)
	{
		for(j=0;j<15;j++)
		{
		if(i>j) continue;
		w[arr[i]^arr[j]]++;
		}
	}

	for(k=0;k<m;k++)
	{
		if(w[k] && w[k]!=15)
		{	
			if(w[k]>1)
			 printf("%d\t%d\n",k,w[k]);
			else continue;
	}
		else
			continue;
	
	}
	printf("\n\n\n");
	for(i=0;i<=15;i++)
		{
			for(h=0;h<=xorcounter;h++)
			{
				if(arr[i]==xorbank[h]) printf("found !!!!%d\n",arr[i]);
			}
}
return 1;
		}


int bin(int num)
{
int bin[100],mod,cnt;

cnt=0;

do

{

mod=num%2;

bin[cnt]=mod;

num=num/2;

cnt++;

}while(num>0);

while(cnt>0)

printf("%d",bin[--cnt]);

printf("\n\n\n\n");
return 0;
}
	


