#include<algorithm>
#include<cstdio>
#include<vector>
class LittleElephantAndBooks{
    public:
int getNumber(std::vector<int> pages, int number){
 //   for(i=0;i<pages.size();i++)
   //     printf("%d ",pages[i]);

    sort(pages.begin(),pages.end());

    int i;
/*
    for(i=0;i<pages.size();i++)
        printf("%d ",pages[i]);
    printf("\n");*/
    int sum=0;
    for(i=1;i<=number;i++){
        sum+=pages[i];
    }
    return sum;
}
};


