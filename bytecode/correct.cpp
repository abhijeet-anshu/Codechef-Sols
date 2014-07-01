#include<cstdio>
#include<cmath>
#include<cstdlib>
#define uli long long
using namespace std;
uli pf[1000000]={0};
uli ans[1000000];
void primeFactors(long long int n)
{
    uli count;


    count=0;
    while (n%2 == 0)
    {


        n = n/2;
        ++count;

    }
    pf[2]+=count;



    for (uli i = 3; i <= (int)sqrt(n); i = i+2)
    {



        count=0;
        if(n%i==0)
        while (n%i == 0)
        {

            n = n/i;

            ++count;
        }

        pf[i]+=count;
    }


    count=0;
    if (n > 2)
       {
            pf[n]+=1;

        }


}

int main()
{
            long long int i;
            char num[1000000],*arr;
            long long int n;


            scanf("%s",num);
            n=strtoll(num,&arr,10);
            if(n==0 || n<0 || n==1)
            {
                    printf("Invalid Input\n");
                    return 0;
            }

            for(i=2;i<=n;i++)
            primeFactors(i);

            int k=0;
            for(int i=2;i<=n;i++)
            if(pf[i])
            ans[k++]=pf[i];

            for(int i=0;i<k-1;i++)
            printf("%lld ",ans[i]);
            printf("%lld\n",ans[k-1]);
          //  scanf("%lld",&n);
         return 0;

      }



