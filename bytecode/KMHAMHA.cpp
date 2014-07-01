#include<cstdio>
#include<algorithm>
#include<cassert>
#define list struct list
#define graph struct graph

list{
    int a;
    list *next;
};
int kill_it(int index,int count,int ans);
graph{
    list head;
    list *tail;
    void initialize_graph(int i){
        head.a=i;
        head.next=NULL;
        tail=&head;
    }
    void add(int i){
        list *temp=new list;
        temp->a=i;
        tail->next=temp;
        tail=temp;
        temp->next=NULL;
    }
};
graph *arr;
int kill[1000],minv;
inline int minimum(int a,int b){
return a<b?a:b;}

int rid,cid,n;
int row_lookup[1000];
int column_lookup[4000];


int main(void){
    int i,j,k;
    int row[1000],column[1000];
    bool flag;
    int t;
    scanf("%d",&t);
    while(t--){
        rid=cid=0;
        scanf("%d",&n);
        arr=new graph[n<<1];
        for(i=0;i<n;i++){
            scanf("%d%d",row+i,column+i);
            kill[i]=-1;//column_lookup[i]=row_lookup[i]=-1;
        }
        for(i=0;i<n;i++){
            flag=true;
            for(j=0;j<rid;j++){
                if(row_lookup[j]==row[i]){
                    arr[j].add(i);
                    flag=false;
                    break;
                }
            }
            if(flag){
            arr[rid].initialize_graph(i);
            row_lookup[rid]=row[i];
            rid++;
            }
        }

        cid=rid;
        for(i=0;i<n;i++){
            flag=true;
            for(j=rid;j<cid;j++){
                if(column_lookup[j]==column[i]){
                    arr[j].add(i);
                    flag=false;
                    break;
                }
            }
            if(flag){
            arr[cid].initialize_graph(i);
            column_lookup[cid]=column[i];
            cid++;
            }
        }
        minv=minimum(rid,cid-rid);
        minv=minimum(kill_it(0,0,0),minv);
        printf("%d\n",minv);
        delete arr;
    }
    return 0;
}

int kill_it(int index,int count,int ans){
    if(count==n) return ans;
    else if(ans>minv) return minv;
    else if(index==cid) return minv;
    // kill the entire row / column
    list *temp;
    int cnt=0,try1,try2,i;
    for(temp=&(arr[index].head);temp;temp=temp->next){
        i=temp->a;
        if(kill[i]==-1){
            kill[i]=index;
            cnt++;
        }
    }
    try1=kill_it(index+1,count+cnt,ans+1);
    // unkill the row/column
    for(temp=&(arr[index].head);temp;temp=temp->next){
        i=temp->a;
        if(kill[i]==index)
            kill[i]=-1;
    }
    try2=kill_it(index+1,count,ans);
    return minimum(try1,try2);
}
