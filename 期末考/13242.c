#include<stdio.h>
#include<string.h>
#define LL long long int

int n;
LL m, a[(int)2e5+1];

LL cmp( const void* x, const void* y )
{
    LL *a = (LL*)x;
    LL *b = (LL*)y;

    return (*b) - (*a);
}

LL page ( int day )
{
    LL code = 0;
    for( int i=0; i<day; i++ )
        code += a[i];
    int count = 0, c = 1;
    for( int i=day; i<n; i++)
    {
        count++;
        if( a[i] > c ) code += ( a[i] - c );
        if( count == day ) count=0, c++;
    }
    return code;
}

int main()
{
    int t;
    scanf( "%d", &t );
    while( t-- )
    {
        scanf( "%d %lld", &n, &m );
        for( int i=0; i<n; i++ )
            scanf( "%lld", &a[i] );
         qsort( a, n, sizeof(a[0]), cmp );
         int L = 1, R = n+1, ans = -1;
        while( L < R )
        {
            int day = ( L+R ) / 2;
            if( page(day) > m ) ans = day, R = day;
            else L = day + 1;
        }
        printf( "%d\n", ans );
    }

    return 0;
}
