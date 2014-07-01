#include<cstdio>
//#include<math.h>
struct point{
int x;int y;
void input(void){
    scanf("%d%d",&x,&y);
    }};
struct triangle{
    struct point a,b,c;double area;
double input(void){
    a.input();b.input();c.input();
    area=(a.x*(b.y-c.y)+b.x*(c.y-a.y)+c.x*(a.y-b.y));
    //printf("%lf\n",area/2.0);
    if(area<0)
        return -(area/2.0);
    return area/2.0;
}} ;
typedef struct triangle triangle;
int main(void){
    triangle t;
    int n,i;
    double min,max,area;
    int mini=1,maxi=1;
    scanf("%d",&n);
    max=min=t.input();
    for(i=2;i<=n;i++){
        area=t.input();
        if(min>=area){
            min=area;
            mini=i;
        }
        if(max<=area){
            max=area;
            maxi=i;
        }
    }
    printf("%d %d\n",mini,maxi);
    return 0;
}
