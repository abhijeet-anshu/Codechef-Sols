#include<cstdio>
int num[1000000];
int main(void){
    int v,i,arr[10],min,mindigit;
    scanf("%d",&v);
    for(i=1;i<=9;i++) scanf("%d",arr+i);
    min=1000000;
    mindigit=0;
    for(i=9;i>=1;i--){
            if(min>arr[i]){min=arr[i];mindigit=i;}//printf("%d is mindigit with val%d\n",i,min);}
    }
    int maxlen=v/min;
    if(maxlen==0){
        printf("-1\n");
        return 0;
    }
    //printf("%d is min and maxlen is %d\n",mindigit,maxlen);
    char *num=new char[maxlen+1];
    char MC=(char)(mindigit+'0');
    for(i=0;i<maxlen;i++)
        num[i]=MC;
    num[i]=0;
    // try to make the first digits the biggest
    if(mindigit==9){
        printf("%s\n",num);
        return 0;
    }
    int j=0,sv;
    v=v%min;

    while(v>0){

        for(i=9;i>mindigit;i--){
            sv=arr[i]-min;
            if(v>=sv){
                v=v-sv;
                num[j]=char('0'+i);
                j++;
                break;
            }
        }
        if(i==mindigit) break;
    }
    printf("%s\n",num);
    return 0;
}
