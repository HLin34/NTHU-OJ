#include<stdio.h>

int bitreturn( int a, int b )
{
    int ans = a &  (1 << b) ;
    if( ans ==0 )
        return 0;
    else
        return 1;
}

int main()
{
    float x;
    while( scanf( "%f", &x ) != EOF )
    {
        int* z;
        z = &x;
        for( int i=31; i>=0; i-- )
        {
            printf( "%d", bitreturn(*z,i) );
        }
        printf( "\n" );
    }

    return 0;
}
