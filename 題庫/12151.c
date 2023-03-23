#include<stdio.h>

int arr[1005][1005], n, max=0, min=100000;

int main()
{
    scanf( "%d", &n );
    for( int i=0; i<n; i++ )
    {
        for ( int j=0; j<n; j++ )
        {
            scanf( "%d", &arr[i][j]);
        }
    }

    for( int i=0; i<n; i++ )
    {
        for( int j=0; j<n; j++ )
        {
            if( max<arr[i][j] ) max = arr[i][j];
        }
        if( i!=(n-1) ) printf( "%d ", max );
        else printf( "%d\n", max );
        max = 0;
    }

    for( int i=0; i<n; i++ )
    {
        for( int j=0; j<n; j++ )
        {
            if( min>arr[j][i] ) min = arr[j][i];
        }
        if( i!=(n-1) ) printf( "%d ", min );
        else printf( "%d\n", min );
        min = 100000;
    }

    return 0;
}
