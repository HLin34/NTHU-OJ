#include<stdio.h>

int main()
{
    int T;
    scanf( "%d", &T );
    while( T-- )
    {
        int n, arr[10001];
        scanf( "%d", &n );
        for( int i=0; i<n; i++ )
        {
            scanf( "%d", &arr[i] );
        }
        for( int iLoop=1; iLoop<n; iLoop++ )
        {
            for( int index=0; index<(n-iLoop); index++ )
            {
                if( arr[index] > arr[index+1] )
                {
                    int temp;
                    temp = arr[index];
                    arr[index] = arr[index+1];
                    arr[index+1] = temp;
                }
            }
        }
        for( int i=0; i<n; i++ )
        {
            (i<n-1)? printf( "%d ", arr[i] ) : printf( "%d\n", arr[i] );
        }
    }

    return 0;
}
