#include<stdio.h>


main()
{
        int t;
        int a,b;
        scanf("%d",&t);
        while(t--)
        {
                scanf("%d",&a);
                if((a&1) == 0)
                        printf("%d\n",a);
                else
                        printf("%d\n",a-1);
        }
return 0;
}

