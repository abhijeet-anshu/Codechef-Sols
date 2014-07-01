#include<cstdio>
#define uli unsigned long long int
int ncr(int r,int n){
    //printf("%d c %d \n",n,r);
    if(r>n)
        return 0;
    if(r==n)
        return 1;
    int arr[][6]={ {0,0,0,0,0,0},
               {1,0,0,0,0,0},
               {2,1,0,0,0,0},
               {3,3,1,0,0,0},
               {4,6,4,1,0,0},
               {5,10,10,5,1,0},
               {6,15,20,15,6,1}};
            return (arr[n][r-1]);

}
int main(void){
    uli count=0;
    int i,t,n,x,k,j;
    char car[56];
        scanf("%d%d",&x,&n);
        count=0;
        for(j=1;j<=n;j++){
            scanf("%s",car+1);
      //      printf("\n\n%d car\n",j);
            // cabin 1
            k=0;
            for(i=1;i<=4;i++){
                if(car[i]=='0')
                    k++;
            }

            for(i=53;i<=54;i++){
                if(car[i]=='0')
                    k++;
            }
            count+=ncr(x,k);

            //cabin 2:
            k=0;
            for(i=5;i<=8;i++){
                if(car[i]=='0')
                    k++;
            }
            for(i=51;i<=52;i++){
                if(car[i]=='0')
                    k++;
            }
            count+=ncr(x,k);

            //cabin 3:
            k=0;
            for(i=9;i<=12;i++){
                if(car[i]=='0')
                    k++;
            }
            for(i=49;i<=50;i++){
                if(car[i]=='0')
                    k++;
            }
            count+=ncr(x,k);

            //cabin 4:
            k=0;
            for(i=13;i<=16;i++){
                if(car[i]=='0')
                    k++;
            }
            for(i=47;i<=48;i++){
                if(car[i]=='0')
                    k++;
            }
            count+=ncr(x,k);

            //cabin 5:
            k=0;
            for(i=17;i<=20;i++){
                if(car[i]=='0')
                    k++;
            }
            for(i=45;i<=46;i++){
                if(car[i]=='0')
                    k++;
            }
            count+=ncr(x,k);

            // cabin 6
            k=0;
            for(i=21;i<=24;i++){
                if(car[i]=='0')
                    k++;
            }
            for(i=43;i<=44;i++){
                if(car[i]=='0')
                    k++;
            }
            count+=ncr(x,k);

            //cabin 7:
            k=0;
            for(i=25;i<=28;i++){
                if(car[i]=='0')
                    k++;
            }
            for(i=41;i<=42;i++){
                if(car[i]=='0')
                    k++;
            }
            count+=ncr(x,k);

            //cabin 8:
            k=0;
            for(i=29;i<=32;i++){
                if(car[i]=='0')
                    k++;
            }
            for(i=39;i<=40;i++){
                if(car[i]=='0')
                    k++;
            }
            count+=ncr(x,k);

            //cabin 9:
            k=0;
            for(i=33;i<=36;i++){
                if(car[i]=='0')
                    k++;
            }
            for(i=37;i<=38;i++){
                if(car[i]=='0')
                    k++;
            }
            count+=ncr(x,k);
        }

        printf("%llu\n",count);
        return 0;
}

