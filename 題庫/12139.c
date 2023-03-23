#include<stdio.h>

int gcd( int a, int b)
{
    return( b==0 )? a : gcd( b, a%b ) ;
}

int main()
{
    int n;
    scanf( "%d", &n );

    int a[n], max=0;
    for( int i=0; i<n; i++ )
        scanf( "%d", &a[i] );

    for( int i=0; i<n; i++ )
    {
        for( int j=0; j<n; j++ )
        {
            if( i!=j )
            {
                int ans = gcd( a[i], a[j] );
                max = ( ans > max )? ans : max;
            }
        }
    }
    printf( "%d\n", max );

    return 0;
}
