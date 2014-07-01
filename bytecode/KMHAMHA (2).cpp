#include<cstdio>
#define max 1000
int row[max],col[max],coldone[max],rowdone[max],n;
void rmerge_sort(int st,int end);
void rpartition(int st,int hf,int end);
int rowpass(int i,int id,int val);
// please avoid reading this code !!! the most hectic code i have ever written :( ;)
struct grow{
    int head;
    int count;
    struct grow *next;
    struct grow *tail;
    void initialize(void){count=0,next=NULL;}
    void add(int i){
        struct grow *temp=tail;
        tail=tail->next=new (struct grow );
        tail->head=i;
        tail->next=NULL;
    }
    void copy(struct grow *temp){
        head=temp->head;
        count=temp->count;
        next=temp->next;
        tail=temp->tail;
    }
};
struct grow ROW[1000];
typedef struct grow grow;
int colpass(int i,int id,int val);
struct gcol{
    int head;
    int count;
    struct gcol *next;
    struct gcol *tail;
    void initialize(void){count=0,next=NULL;}
    void add(int i){
        struct gcol *temp=tail;
        tail=tail->next=new (struct gcol );
        tail->head=i;
        tail->next=NULL;
    }
};
// please avoid reading this code !!! the most hectic code i have ever written :( ;)
struct gcol COL[1000];
typedef struct gcol gcol;
int main(void){
    freopen("testcase.txt","r",stdin);
    int t,i;
    int rid,cid;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        // please avoid reading this code !!! the most hectic code i have ever written :( ;)
        for(i=0;i<n;i++){
            scanf("%d%d",row+i,col+i);
            coldone[i]=rowdone[i]=1;
        }rid=cid=0;
        for(i=0;i<n;i++){
            if(rowdone[i]){
                rowdone[i]=0;
                ROW[rid].initialize();
                ROW[rid].head=i;
                ROW[rid].tail=ROW+rid;
                ROW[rid].count=1+rowpass(i+1,rid,row[i]);
                row[i]=rid++;
            }
            if(coldone[i]){
                coldone[i]=0;
                COL[cid].initialize();
                COL[cid].head=i;
                COL[cid].tail=COL+cid;
                COL[cid].count=1+colpass(i+1,cid,col[i]);
                col[i]=cid++;
            }
        }// NOW just sort col and row according to their count :P
        //rmerge_sort(0,rid-1);
        //cmerge_sort(0,cid-1);

        for(i=0;i<rid;i++){
            printf("%d count =%d\n",i+1,ROW[i].count);
            for(grow *j=ROW+i;j;j=j->next){
                printf("%d->",j->head);
            }printf("\n\n");
        }
    }
}
void rmerge_sort(int st,int end){
    if(end>st){
        int hf=end+st>>1;
        rmerge_sort(st,hf);
        rmerge_sort(hf+1,end);
        rpartition(st,hf,end);
    }
}
void rpartition(int st,int hf,int end){
    int la=hf-st+1,lb=end-hf;
    grow *A=new grow[la+1];
    grow *B=new grow[lb+1];
    int i,j,k=0;
    for(i=st;i<=hf;i++){ A[k].copy(ROW+i);k++;}
    A[k].count=1001;k=0;
    for(i=hf+1;i<=end;i++){B[k].copy(ROW+i);k++;}
    B[k].count=1001;k=0;j=0;
    for(i=st;i<=end;i++){
        if(A[k].count<B[j].count){
            ROW[i].copy(A+k);
            k++;
        }
        else{
            ROW[i].copy(B+j);
            j++;
        }
    }
    delete A;
    delete B;
}
int colpass(int i,int id,int val){
    if(i==n)
        return 0;
    if(col[i]==val){
        coldone[i]=0;
        COL[id].add(i);
        col[i]=id;
        return 1+colpass(i+1,id,val);
    }
    else{
        return colpass(i+1,id,val);
    }
}
int rowpass(int i,int id,int val){
    if(i==n)
        return 0;
    if(row[i]==val){
        rowdone[i]=0;
        ROW[id].add(i);
        row[i]=id;
        return 1+rowpass(i+1,id,val);
    }
    else{
        return rowpass(i+1,id,val);
    }
}
/*

        for(i=0;i<rid;i++){
            printf("\n%d count =%d\n\n",i,ROW[i].count);
            for(grow *j=ROW+i;j;j=j->next){
                printf("%d->",j->head);
            }printf("\n\n");
        }
        for(i=0;i<cid;i++){
            printf("\n%d count =%d\n\n",i,COL[i].count);
            for(gcol *j=COL+i;j;j=j->next){
                printf("%d->",j->head);
            }printf("\n\n");
        }
*/

