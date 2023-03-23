#include<stdio.h>
#define INF 0x3f3f3f3f

int gcd( int a, int b );
int x[10000], y[10000], constant[10000];

int main()
{
    int testcase, ans, N, coordinate[100][2];
    scanf( "%d", &testcase );

    while( testcase-- )
    {
        int ans =0;
        scanf( "%d", &N );
        for( int i=0; i<N; i++ )
            scanf( "%d %d", &coordinate[i][0], &coordinate[i][1] );

        int gcd_1, c=0;
        for( int i=0; i<N-1; i++){
            for( int j = i+1; j<N; j++ ){
                x[c] = coordinate[j][0] - coordinate[i][0];
                y[c] = coordinate[j][1] - coordinate[i][1];
                if( x[c] && y[c] ){
                    gcd_1 = gcd( x[c], y[c] );
                    x[c] /= gcd_1;
                    y[c] /= gcd_1;
                }
                else if( x[c] == 0 && y[c] != 0 ){
                    y[c] = 1;
                }
                else if( x[c] != 0 && y[c] == 0 ){
                    x[c] = 1;
                }
                else if( x[c] == 0 && y[c] == 0 ){
                    x[c] = INF;
                    y[c] = INF;
                }
                if( x[c] < 0 ){
                    x[c] = -x[c];
                    y[c] = -y[c];
                }
                constant[c] = x[c]*coordinate[i][1] - y[c]*coordinate[i][0];
                c++;
            }
        }

        int temp;
        for( int i=0; i<c-1; i++ ){
            temp = 0;
            if( x[i] == INF ){
                continue;
            }
            for( int j=i+1; j<c; j++ ){
                if( x[j] == INF ){
                    continue;
                }
                if( x[i] == x[j] && y[i] == y[j] && constant[i] == constant[j] ){
                    temp++;
                    x[j] = INF;
                    y[j] = INF;
                }
            }
            if(temp){
                ans++;
            }
        }

    printf( "%d\n", ans );

    }

    return 0;
}

int gcd( int a, int b ){
    if(b==0) return a;
    else return gcd( b, a%b );
}
