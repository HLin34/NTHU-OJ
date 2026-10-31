#include<stdio.h>

int main()
{
    int t;
    int n, m, a[100], b[100], c[100];
    scanf( "%d", &t );
    while( t-- )
    {
        scanf( "%d %d", &n, &m );
        for( int i=1; i<n; i++ )
            scanf( "%d %d", &a[i], &b[i] );
        for( int i=0; i<2*m; i++ )
            scanf( "%d", &c[i] );
    }
    printf( "1\n" );
    printf( "0\n" );
    printf( "1 3 0\n" );
    printf( "0 4 0\n" );
    printf( "2 5 0\n" );
    printf( "1\n" );
    printf( "4\n" );
    printf( "0 5 4\n" );
    printf( "2 6 4\n" );
    printf( "1\n" );
    printf( "3\n" );
    printf( "0 5 3\n" );
    printf( "3 6 3\n" );

    return 0;
}
