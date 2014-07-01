#include<stdio.h>
int main(void)
{
int ctod;
int i;
int t;
char A[20010],B[20010];
int  adigit[10],bdigit[10];
int n7,n4;
scanf("%d",&t);
while(t--)
{
	n7=n4=0;
	scanf("%s",A);
	scanf("%s",B);
	for(i=0;i<10;i++)	adigit[i]=bdigit[i]=0;
	for(i=0;A[i];i++)
	{		
		switch(A[i]){
			case  '0':
			case '1':
			case '2':	
			case '3':
                                adigit[3]++;
                                break;
			case '4':
                                adigit[4]++;
                                break;
			case '5':
			case '6':
                                adigit[6]++;
                                break;
			case '7':
                                adigit[7]++;
                                break;
			case '8':
			case '9':
                                adigit[9]++;
                                break;}
//		adigit[ctod]++;

		switch(B[i]){
			case '0':
			case '1':
			case '2':
			case '3':
                                bdigit[3]++;
                                break;
			case '4':
                                bdigit[4]++;
                                break;
			case '5':
			case '6':
                                bdigit[6]++;
                                break;
			case '7':
                                bdigit[7]++;
                                break;
			case '8':
			case '9':
                                bdigit[9]++;
                                break;}
//		bdigit[ctod]++;
}	
	i=6;
	
		if(adigit[i]&& bdigit[7])
		{
			if(adigit[i]<=bdigit[7]){	n7+= adigit[i];		bdigit[7]-=adigit[i];	adigit[i]=0;}
			else {				n7+= bdigit[7];		adigit[i]-=bdigit[7];	bdigit[7]=0;}
		}
		if(bdigit[i]&& adigit[7])
		{
			if(bdigit[i]<=adigit[7]){	n7+= bdigit[i];		adigit[7]-=bdigit[i];	bdigit[i]=0;}
			else{   			n7+= adigit[7];		bdigit[i]-=adigit[7];	adigit[7]=0;}
		}
//		if(adigit[7]==0 && bdigit[7]==0)	break;
	
	//for(i=0;i<4;i++)
       // {
	i=3;
                if(adigit[i]&& bdigit[7])
                {
                        if(adigit[i]<=bdigit[7]){	n7+= adigit[i];		bdigit[7]-=adigit[i];	adigit[i]=0;}
                        else {  			n7+= bdigit[7];		adigit[i]-=bdigit[7];	bdigit[7]=0;}
                }
                if(bdigit[i]&& adigit[7])
                {
                        if(bdigit[i]<=adigit[7]){	n7+= bdigit[i];		adigit[7]-=bdigit[i];	bdigit[i]=0;}
                        else{   			n7+= adigit[7];		bdigit[i]-=adigit[7];	adigit[7]=0;}
                }
  //              if(adigit[7]==0 && bdigit[7]==0)        break;
        

	
	if(adigit[7] && bdigit[4]){
		if(bdigit[4]<=adigit[7]){		n7+=bdigit[4];	adigit[7]-=bdigit[4];	bdigit[4]=0;}
		else { 					n7+=adigit[7];	bdigit[4]-=adigit[7];	adigit[7]=0;}
	}
	if(bdigit[7] && adigit[4]){
		if(adigit[4]<=bdigit[7]) {		n7+=adigit[4];	bdigit[7]-=adigit[4];	adigit[4]=0;}
		else {					n7+=bdigit[7]; 	adigit[4]-=bdigit[7];	bdigit[7]=0;}
	}

	if(adigit[7] && bdigit[7])
	{
		n7+= (adigit[7]<=bdigit[7]?adigit[7]:bdigit[7]);
	}
	//for(i=0;i<4;i++)
//	{
	i=3;
		if(adigit[i]&&bdigit[4]){
			if(adigit[i]<=bdigit[4]){	n4+=adigit[i];	bdigit[4]-=adigit[i];	adigit[i]=0;}
			else { 				n4+=bdigit[4];	adigit[i]-=bdigit[4];	bdigit[4]=0;}
		}
		if(bdigit[i]&&adigit[4]){
			if(bdigit[i]<=adigit[4]){	n4+=bdigit[i];	adigit[4]-=bdigit[i];	bdigit[i]=0;}
			else{				n4+=adigit[4];	bdigit[i]-=adigit[4];	adigit[4]=0;}
		}
//		if(adigit[4]==0&&bdigit[4]==0) 		break;
	if(adigit[4] && bdigit[4])
		n4+= (adigit[4]<=bdigit[4]?adigit[4]:bdigit[4]);

	for(i=0;i<n7;i++) printf("7");
	for(i=0;i<n4;i++) printf("4");
	printf("\n");
}	
return 0;
}
