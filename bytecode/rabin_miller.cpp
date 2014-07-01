    #include <cstdio>
    #include <algorithm>
    #include <cassert>
    using namespace std;

    // iterative much faster
    long long mulmod( long long a, long long b, long long c)
    {	long long sum = 0,y = a % c;
    while( b )
    {	if(b & 1)
    sum = (sum + y)%c;
    y=(y<<1)%c;
    b >>= 1;
    }
    return sum;
    }

    long long modulo( long long a, long long b, long long P)
    {	long long ans = 1;
    while( b )
    {	if( b & 1 )
    ans = mulmod(ans, a, P);
    a = mulmod(a, a, P);
    b >>= 1;
    }
    return ans;
    }

    const int maxIter = 4;
    bool passesMiLLerRabin(long long N)
    {	if(N < 2)
    return false;
    if( N % 2 == 0)
    return N == 2;
    if( N % 3 == 0)
    return N == 3;
    if( N % 5 == 0)
    return N == 5;
    if( N % 7 == 0)
    return N == 7;
    int d = 0;
    long long odd = N - 1;
    while( (odd & 1) == 0)
    {	d++;
    odd>>= 1;
    }
    for(int i = 0; i < maxIter; i++)
    {	long long a = rand() % ( N - 1) + 1;
    long long mod = modulo( a, odd, N);
    bool passes = ( mod == 1 || mod == N -1 );
    for(int r = 1; r < d && !passes; r ++)
    {	mod = mulmod( mod, mod, N);
    passes = passes || mod == N - 1; // use instead of if-else counters
    }
    if(!passes)
    return false;
    }
    return true;
    }

    int main()
    {	int t;
    scanf("%d",&t);
    while(t--)
    {	long long n;
    scanf("%lld",&n);
    n--;
    for(long long int i=n;i>=2;i--)
    {	if(passesMiLLerRabin(i))
    {	printf("%lld\n",i);
    break;
    }
    }
    }
    return 0;
    }
