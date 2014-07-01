#include<stdio.h>
#include<stdlib.h>

typedef struct opstack ops;

struct opstack{
char op;
ops *next;
};

ops* push(ops *S,char c)
{	
        ops *s;
        s=(ops*)malloc(sizeof(ops));
        s->op=c;
        s->next=NULL;
        if(S!=NULL)		
                s->next=S;
        S=s;
        return S;
}


char pop(ops **S)
{
	char op;
        ops *temp,*p;
	if((*S)==NULL) return -1;
	
	//if((S)->next == NULL){printf("Hi abhi\n");	op=(S)->op;free(S); return op;}
//	printf("\ncp1\n");
	temp=*S;
//	printf("\ncp2\n");
        p=temp->next;
	*S=p;
	op=temp->op;
        //temp->next=p->next;
        free(temp);
        return op;
}

main(void)
{
int t,i;
char c;
char exp[450];
ops *S;
scanf("%d",&t);
	while(t--)
	{
		scanf("%s",exp);
		for(i=0;exp[i];i++)
		{
			c=exp[i];
			if(c=='('){	continue;}
			else if(c>='a'&& c<='z')
				printf("%c",c);
			else if(c == ')')	
				{c=pop(&S);if(c+1)printf("%c",c);}
			else 	S=push(S,c);
		}
		printf("\n");
	}
return 0;
}	
