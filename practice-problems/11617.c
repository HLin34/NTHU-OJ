#include<stdio.h>

int main()
{
    int n, m, x;
    int a[200005]={0}, b[100005]={0}, idx=-1;
    scanf( "%d %d", &n, &m );
    while( m-- )
    {
         scanf( "%d", &x );
         b[++idx] = x ;
    }

    for( int i = idx; i >= 0; i-- )
    {
        if( !a[ b[i] ] )
        {
            printf( "%d\n", b[i] );
            a[ b[i] ] = 1;
        }
    }
    for( int i=1; i<=n; i++)
    {
        if( !a[i] )
            printf( "%d\n", i);
    }

    return 0;
}
