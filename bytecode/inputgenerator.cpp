#include<stdio.h>
#include<stdlib.h>


main()//char *args[])
{
	int n;
	FILE *fp;
	fp=fopen("Input.txt","w");
	unsigned int i;
	for(i=0;i<n;i++)
	{
		i=rand();
		fprintf(fp,"%u\n",i);
	}
}		
