#include<stdio.h>

int tmp[20];
int n;
int function( int a, int sum )
{
    if ( sum == 0 )
        return 1;
    else if ( sum < 0)
        return 0;
    else if ( a>=n)
        return 0;
    else
    {
        return function( a+1, sum ) + function( a+1, sum-tmp[a] );
    }
}

int main()
{
    int k;
    scanf( "%d%d", &n, &k );
    for( int i=0; i<n; i++ )
    {
        scanf( "%d", &tmp[i] );
    }
    printf( "%d\n", function(0,k) );

    return 0;
}
