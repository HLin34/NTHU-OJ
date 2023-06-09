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

    int full = 0;
    for( int i = 1; i <= n; i++ )
        if( temp[i] > 0) full++;

    int prefix[5001] = {0};
    for( int i = 1; i <= n; i++ )
        prefix[i] = prefix[i-1] + (( temp[i] == 1 )? 1 : 0 );

    int minus = INF;
    for( int i = 0; i < q; i++ )
        if( i != out )
            minus = Min( minus, prefix[ solider[i][1] ] - prefix[ solider[i][0]-1 ]);

    return full - minus;
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
            }
        }
        int ans =0;
        for( int i = 0; i < q; i++){
            ans = Max( ans, cal(i) );
        }
        printf( "%d\n", ans );
        memset( wall, 0, sizeof(wall));
    }

    return 0;
}
