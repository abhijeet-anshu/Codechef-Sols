#include<cstdio>
#define max 1000000
struct node{
    int leftsum;
    int rigtsum;
    bool left;
    bool right;
    int sum;
    node(){
        left=right=true;
    }
    void set_leaf(int val){
        leftsum=rightssum=sum;
    }
}segment[max];

typedef struct node node;
int *arr;
int main(void){
    int n,i,j;
    scanf("%d",&n);
    arr=new int[n+1];
    for(i=1;i<=n;i++)
        scanf("%d",arr+i);
    construct(1,1,n);
    scanf("%d",&n);
    while(n--){
        scanf("%d%d",&i,&j);
        i=rmq(i,j);
        printf("%d\n",i);
    }
    return 0;
}

void construct(int n,int s,int e){
    if(s==e){
        segment[n].set_leaf(arr[i]);
        return ;
    }
    int a=s+e>>1;
    int b=n<<1;
    int max,spare;
    construct(b,s,a);
    construct(b+1,a+1,e);
    if(segment[b].right&& segment[b+1].left){
		if(segment[b].sum>=0 && segment[b+1].sum>=0){
			segment[n].sum=segment[b].sum+segment[b+1].sum;
			segment[n].left=segment[b].left;
			segment[n].right=segment[b+1].right;
			}
		else if(segment[b].sum>=0){
			segment[n].sum=segment[b].sum;
			segment[n].left=segment[b].left;
			segment[n].right=false;
		}
		else if(segment[b+1].sum>=0){
			segment[n].sum=segment[b+1].sum;
			segment[n].right=segment[b+1].right;
			segment[n].left=false;
		}
		else if(segment[b].sum>segment[b+1].sum){
			segment[n].sum=segment[b].sum;
			segment[n].left=segment[b].left;
			segment[n].right=false;
		}
		else{
		segment[n].sum=segment[b+1].sum;
			segment[n].right=segment[b+1].right;
			segment[n].left=false;
		}
	}
	else if(segment[b].right){
		
	}
	
			
			
			
			
		
	
	}
		


}

