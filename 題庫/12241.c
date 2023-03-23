#include<stdio.h>
#include<stdlib.h>
#define mod 1000000007
#define LL long long int

typedef struct
{
    LL m[2][2];
}matrix;

matrix multiplier( matrix a, matrix b )
{
    matrix ans;
    ans.m[0][0] = (((a.m[0][0] % mod ) * (b.m[0][0] %mod) % mod ) + ((a.m[0][1] % mod ) * (b.m[1][0] %mod) % mod) ) %mod;
    ans.m[0][1] = (((a.m[0][0] % mod ) * (b.m[0][1] %mod) % mod ) + ((a.m[0][1] % mod ) * (b.m[1][1] %mod) % mod) ) %mod;
    ans.m[1][0] = (((a.m[1][0] % mod ) * (b.m[0][0] %mod) % mod ) + ((a.m[1][1] % mod ) * (b.m[1][0] %mod) % mod) ) %mod;
    ans.m[1][1] = (((a.m[1][0] % mod ) * (b.m[0][1] %mod) % mod ) + ((a.m[1][1] % mod ) * (b.m[1][1] %mod) % mod) ) %mod;
    return ans;
}

matrix create()
{
    matrix X;
    X.m[0][0] = 1;
    X.m[0][1] = 1;
    X.m[1][0] = 1;
    X.m[1][1] = 0;
    return X;
}

matrix fpw( LL i )
{
    if( i==1 )
        return create();
    matrix now = fpw( i / 2 );
    if( i%2 == 0 )
        return multiplier( now, now );
    else return multiplier( multiplier( now, now ), fpw(1) );
}

int main()
{
    LL i;
    while( scanf( "%lld\n", &i ) != EOF )
    {
        matrix fx;
        if( i==1 || i==2 )
            printf( "%lld\n", 1 );
        else
        {
            fx = fpw( i-2 );
            LL ans;
            ans = ( fx.m[0][0] + fx.m[0][1] ) % mod;
            printf( "%lld\n", ans );
        }
    }

    return 0;
}
