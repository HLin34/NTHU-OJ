#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int n, k, ans, a[(int)3e5], sum[(int)3e5],t;
long long int p;

int cmp( const void * a, const void * b )
{
    int *p = (int*) a;
    int *q = (int*) b;
    return (*p) - (*q);
}
int main()
{
    scanf( "%d", &t );
    while( t-- )
    {
        scanf( "%d %lld %d", &n, &p,&k );
        for( int i=1; i<=n; i++ ) scanf( "%d", &a[i] );
        qsort( a+1, n, sizeof(int), cmp );
        for( int i=1; i<k; i++ ) sum[i] = a[i] + sum[i-1];
        for( int i=k; i<=n; i++) sum[i] = sum[i-k] + a[i];

        if( p >= sum[n] ) printf( "%lld\n", n );
        else if( p<sum[1]) printf( "0\n" );
        else
        {
            for( int i=n; i>0; i-- )
            {
                if( p>=sum[i] && p<sum[i+1] )
                {
                    printf( "%d\n", i );
                    break;
                }
            }
        }
        memset( sum, 0, n );
    }

    return 0;
}
