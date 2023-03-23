#include<stdio.h>
#define mod 1000000007
#define LL long long int

typedef struct
{
    LL m[3][3];
}Mat;

Mat create()
{
    Mat M;
    M.m[0][0] = 1; M.m[0][1] = 2; M.m[0][2] = 1;
    M.m[1][0] = 1; M.m[1][1] = 0; M.m[1][2] = 0;
    M.m[2][0] = 0; M.m[2][1] = 1; M.m[2][2] = 0;
    return M;
}

Mat multiplier( Mat a, Mat b )
{
    Mat ans;
    for( int i =0; i<3; i++)
    {
        for( int j=0; j<3; j++)
        {
            ans.m[i][j] =0;
            for ( int k=0; k<3; k++ )
                ans.m[i][j] += ( a.m[i][k] * b.m[k][j] ) % mod ;
        }
    }
    return  ans;
}

Mat fpw( LL y )
{
    if( y==1 ) return create();
    Mat res = fpw(y/2);
    res = multiplier( res, res );
    if( y % 2 == 1 ) return res = multiplier( res, create() );
    if( y % 2 == 0 ) return res;
}

int main()
{
    int t;
    LL x;
    scanf( "%d", &t );
    Mat r;
    while( t-- )
    {
        scanf( "%lld", &x );
        if( x == 1 ) printf( "1\n" );
        else if( x ==2 ) printf( "12\n" );
        else if( x ==3 ) printf( "13\n" );
        else
        {
            r = fpw( x - 3 );
            printf( "%lld\n", ( r.m[0][0]*13 + r.m[0][1]*12 + r.m[0][2]*1 ) % mod );
        }
    }

    return 0;
}
