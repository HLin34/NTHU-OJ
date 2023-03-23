#include<stdio.h>
#define LL long long int

LL function( LL a, LL b, LL c )
{
    LL k=1;
    if( b==0 )
        return k%c;

    k = function( a, b/2, c );

    if( b%2 == 1 )
        return ((((k%c)*(k%c))%c)*a)%c;
    else
        return ((k%c)*(k%c))%c;
}

int main()
{
    LL x, y, m;
    scanf( "%lld %lld %lld", &x, &y, &m );
    x %= m;
    printf( "%lld\n", function( x, y, m ) );

    return 0;
}
