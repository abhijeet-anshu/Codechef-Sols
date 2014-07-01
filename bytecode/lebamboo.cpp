#include<cstdio>

int main(void){

//    freopen("lebamboo.txt","r",stdin);

    int arr[50];

    int temp,t;

    int n,i;

    int ans;

    int min,max,mini;

    scanf("%d",&t);

    while(t--){

        scanf("%d",&n);

        for(i=0;i<n;i++){

            scanf("%d",arr+i);

        }


        for(i=0;i<n;i++){

            scanf("%d",&temp);

            arr[i]=arr[i]*-1+temp;

        }

        if(n==1){

            if(arr[0]<=0)

                ans=-arr[0];

            else

                ans=-1;

        }

        else if(n==2){

            if(arr[0]==-arr[1]){

                ans=arr[0];

                ans=ans>=0?ans:-1*ans;

            }

            else{

                ans=-1;

            }

        }
//1 0 -1 1 2 3
//       2 2 2
        else{
            ans=0;

            while(true){

                max=min=arr[0];

                mini=0;

                arr[0]--;

                for(i=1;i<n;i++){

                    if(min>arr[i]){

                        min=arr[i];

                        mini=i;

                    }

                    else if(max<arr[i]){

                        max=arr[i];

                    }

                       arr[i]--;

                }

                    arr[mini]=arr[mini]+2;

                    if(max==0 && min==0){

                        break;

                    }
                    if(max<0){

                        ans=-1;

                        break;
                    }



                    ans++;



                }// end of while

            }// end of else

        printf("%d\n",ans);

    }

        return 0;

}
