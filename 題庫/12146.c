#include<stdio.h>
#include<stdlib.h>

typedef struct
{
    int x;
    int y;
}data;

int cmp( const void* a, const void* b )
{
    data *p = (data*)a; data *q = (data*)b;
    return ( (*p).x - (*p).y ) - ( (*q).x - (*q).y ) ;
}
data tmp[100003];
int main()
{
    int n, k,
    long long int ans=0;
    scanf( "%d %d", &n, &k );
    for( int i=0; i<n; i++ ) scanf( "%d", &tmp[i].x );
    for( int i=0; i<n; i++ ) scanf( "%d", &tmp[i].y );
    qsort( tmp, n, sizeof(tmp[0]), cmp);
    for( int i=0; i<n; i++ )
    {
        if( i+1 <= k || (tmp[i].x - tmp[i].y) < 0 )  ans += tmp[i].x;
        else ans += tmp[i].y;
    }

    printf( "%lld\n", ans );
    return 0;
}
