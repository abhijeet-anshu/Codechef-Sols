#include<cstdio>
#include<cstdlib>
#define white 0
#define black 1

struct node{
	int value;
	struct node *next;
	node(int a){
		value=a;
		next=NULL;
	}
	node(){
		value=-1;
		next=NULL;
	}
	void set(int a){
		value=a;
	}

};
typedef struct node node;

struct list{
	node head;
	node *tail;
	int parent;
	int flag;
	list(){
			tail=&head;
			flag=white;
			parent=-1;
	}
	bool not_visited(){
		return flag==white;
	}
	void set_visited(){
		flag=black;
	//	printf("%d visited and parent %d was \n",head.value,parent);
	}
	void add(int b){
	  //  printf("setting %d adjacent to %d \n",head.value,b);
		node *temp=new node(b);
		tail->next=temp;
		tail=temp;
	}
};
	list *arr;
list *createlist(int n){
	list *temp=new list[n+1];
	for(int i=1;i<=n;i++){
		temp[i].head.set(i);
		}
	return temp;
}
void dfs_visit(int );
int main(void){
	int t;
	int n,a,b,i;
	int hq1,hq2;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d%d",&n,&hq1,&hq2);
		arr= createlist(n);
		for(i=1;i<hq1;i++){
			scanf("%d",&a);
			arr[i].add(a);
			arr[a].add(i);
		}
		for(i=hq1+1;i<=n;i++){
			scanf("%d",&a);
			arr[i].add(a);
			arr[a].add(i);
		}
		dfs_visit(hq2);
		for(i=1;i<hq2;i++)
			printf("%d ",arr[i].parent);
        for(i=hq2+1;i<=n;i++)
			printf("%d ",arr[i].parent);

		printf("\n");
	}
	return 0;
}

void dfs_visit(int a){
	arr[a].set_visited();
	node *temp;
	int val;
	for(temp=arr[a].head.next;temp;temp=temp->next){
		val=temp->value;
		if(arr[val].not_visited()){
			arr[val].parent=a;
			dfs_visit(val);
		}
	}
}
