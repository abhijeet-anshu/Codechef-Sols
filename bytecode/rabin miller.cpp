    #include <cstdio>
    #include <cstring>
    #include <cstdlib>
    using namespace std;
    typedef int lint;
    lint n;
    int q[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
    lint pr[]={99999989,99999971};//,19961234199612358LL};

    lint multi(lint x, lint y)
    {
    lint res = x*y - n * lint(double(x)*y/n+1e-3);
    while(res < 0) res += n;
    while(res >= n) res -= n;
    return res;
    }
    inline lint pow(lint x, lint y)
    {
    lint res(1);
    while(y)
    {
    if(y&1)
    res = multi(res,x);
    y >>= 1;
    x = multi(x,x);
    }
    return res;
    }
    inline bool check()
    {
    if(n == 2) return true;
    if(n == 1 || (~n&1)) return false;
    for(int i=0;i<25;i++)
    if(n%q[i]==0&&n!=q[i])
    return false;
    lint t(0),m(n-1),a;
    for(;~m&1; m>>=1,t++);
    for(int i = 0; i < 2; i++)
    {
    a = pow(pr[i]%(n-1)+1,m);
    if(a != 1)
    {
    bool flag(true);
    for(int j = 0; j < t; j++,a = multi(a,a))
    if(a == n-1)
    {
    flag = false;
    break;
    }
    if(flag)
    return false;
    }
    }
    return true;
    }
    int main()
    {
    int T;
    scanf("%d",&T);
    while(T--)
    {
    scanf("%d",&n);
    n--;
    for(;n;n--)
    if(check())
    {
    printf("%d\n",n);
    break;
    }
    }
    return 0;
    }
