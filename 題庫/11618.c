#include<stdio.h>
#define LL long long int

LL n, x1, x2, x3, lc, gcd1, gcd2, gcd3;

LL gcd( LL x, LL y )
{
    if( y==0 ) return x;
    else return gcd( y, x%y );
}

LL lcm( LL a, LL b )
{
    return a / gcd( a, b ) * b;
}

int main()
{
    int T;
    scanf( "%d", &T );
    while(T--)
    {
        scanf( "%lld %lld %lld %lld", &n, &x1, &x2, &x3 );
        gcd1 = gcd( n, x1 );
        gcd2 = gcd( n, x2 );
        gcd3 = gcd( n, x3 );
        lc = lcm( lcm( gcd1, gcd2 ), gcd3 );
        printf( "%lld\n", n/lc );
    }

    return 0;
}
