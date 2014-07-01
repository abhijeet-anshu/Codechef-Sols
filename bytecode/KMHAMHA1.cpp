#include<cstdio>
#define max 1000
int row[max+1],col[max+1],coldone[max],rowdone[max],n;
void rmerge_sort(int st,int end);
void rpartition(int st,int hf,int end);
void cmerge_sort(int st,int end);
void cpartition(int st,int hf,int end);
int rowpass(int i,int id,int val);
int killd[1001];
int rowkill(int id);
int colkill(int id);
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
struct grow ROW[max+1];
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
    void copy(struct gcol *temp){
        head=temp->head;
        count=temp->count;
        next=temp->next;
        tail=temp->tail;
    }
};
// please avoid reading this code !!! the most hectic code i have ever written :( ;)
struct gcol COL[max+1];
typedef struct gcol gcol;
int main(void){
    //freopen("testcase.txt","r",stdin);
    int t,i,j,k;
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
        rmerge_sort(0,rid-1);
        cmerge_sort(0,cid-1);
        ROW[rid].count=-1;
        COL[cid].count=-1;
        for(i=0;i<n;i++)killd[i]=1;
        int count=0,bits=0;k=j=0;

        for(i=0;i<n;i++){
                if(count==n)
                    break;
            if(ROW[k].count>COL[j].count){
                count+=rowkill(k);
                //bits++;
                k++;
            }
            else{
                count+=colkill(j);
                j++;
                //bits++;
            }
            bits++;
        }

        printf("%d\n",bits);
    }
    return 0;
}
int rowkill(int id){
    int k,count=0;
    for(grow *j=ROW+id;j;j=j->next){
        k=j->head;
        if(killd[k]){
         killd[k]   =0;
         count++;
        }
    }
    //printf("deleting %d elements row wise in %d row \n ",count,id);
        return count;
}

int colkill(int id){
    int k,count=0;
    for(gcol *j=COL+id;j;j=j->next){
        k=j->head;
        if(killd[k]){
         killd[k]   =0;
         count++;
        }}
      //  printf("deleting %d elements column wise in %d column\n ",count,id);
        return count;

}
void rmerge_sort(int st,int end){
    if(end>st){
        int hf=end+st>>1;
        rmerge_sort(st,hf);
        rmerge_sort(hf+1,end);
        rpartition(st,hf,end);
    }
}
void cmerge_sort(int st,int end){
    if(end>st){
        int hf=end+st>>1;
        cmerge_sort(st,hf);
        cmerge_sort(hf+1,end);
        cpartition(st,hf,end);
    }
}

void rpartition(int st,int hf,int end){
    int la=hf-st+1,lb=end-hf;
    grow *A=new grow[la+1];
    grow *B=new grow[lb+1];
    int i,j,k=0;
    for(i=st;i<=hf;i++){ A[k].copy(ROW+i);k++;}
    A[k].count=-1;k=0;
    for(i=hf+1;i<=end;i++){B[k].copy(ROW+i);k++;}
    B[k].count=-1;k=0;j=0;
    for(i=st;i<=end;i++){
        if(A[k].count>B[j].count){ROW[i].copy(A+k);k++;}
        else{ROW[i].copy(B+j);j++;}}
    //delete A;delete B;
    }

void cpartition(int st,int hf,int end){
    int la=hf-st+1,lb=end-hf;
    gcol *A=new gcol[la+1];
    gcol *B=new gcol[lb+1];
    int i,j,k=0;
    for(i=st;i<=hf;i++){ A[k].copy(COL+i);k++;}
    A[k].count=-1;k=0;
    for(i=hf+1;i<=end;i++){B[k].copy(COL+i);k++;}
    B[k].count=-1;k=0;j=0;
    for(i=st;i<=end;i++){
        if(A[k].count>B[j].count){COL[i].copy(A+k);k++;}
        else{COL[i].copy(B+j);j++;}}
    //delete A;delete B;
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


