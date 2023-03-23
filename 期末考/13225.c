#include<stdio.h>
#include<string.h>
#define Max(x,y) ( x > y ? x :y )
#define Min(x,y) ( x < y ? x :y )
#define INF 0x7fffffff

int solider[5001][2];
int wall[5001];
int n, q;

int cal( int out ){
    int temp[5001];
    for( int i =1; i <= n; i++ )
        temp[i] = wall[i];
    for( int i = solider[out][0]; i <= solider[out][1]; i++ )
        temp[i]--;
        // minus the part of the first solider
    int full = 0;
    for( int i = 1; i <= n; i++ )
        if( temp[i] > 0) full++;
        // calculate the part still being guard
    int prefix[5001] = {0};
    for( int i = 1; i <= n; i++ )
        prefix[i] = prefix[i-1] + (( temp[i] == 1 )? 1 : 0 );
        // prefix sum
    int minus = INF, minus_second = INF, out_second;
    for( int i = 0; i < q; i++ )
    {
        if( i != out )
            if( minus > ( prefix[ solider[i][1] ] - prefix[ solider[i][0]-1 ] ) )
            {
                minus = ( prefix[ solider[i][1] ] - prefix[ solider[i][0]-1 ] );
                out_second = i;
            }
    }
    // choose the second one
    for( int i = 0; i < q; i++ )
    {
        if( i != out && i !=out_second )
        {
             if( minus_second > ( prefix[ solider[i][1] ] - prefix[ solider[i][0]-1 ] ) )
                minus_second = ( prefix[ solider[i][1] ] - prefix[ solider[i][0]-1 ] );
        }
    }
    // choose the third one
    return full - minus - minus_second;
}


int main()
{
    int t;
    scanf( "%d", &t );
    while( t-- ){
        scanf( "%d %d", &n, &q );
        for( int i = 0; i < q; i++)
        {
            scanf( "%d %d", &solider[i][0], &solider[i][1] );
            for( int j = solider[i][0]; j <= solider[i][1]; j++){
                wall[j]++;
                // store tje part that the solider can guard
            }
        }
        int ans =0;
        for( int i = 0; i < q; i++){
            ans = Max( ans, cal(i) );
            // Max() -> choose the first one out
        }
        printf( "%d\n", ans );
        memset( wall, 0, sizeof(wall));
    }

    return 0;
}
