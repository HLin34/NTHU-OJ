#include<stdio.h>
#include<string.h>

char A[5], B[10];

int main()
{
    int t, ans=0;
    scanf( "%s ", A );
    scanf( "%d", &t );
    int length = strlen(A);
    while( t-- )
    {
        int temp = 0;
        scanf( "%s", B );
        int length1 = strlen(B);
        for( int i=0; i<length1; i++)
        {
            for( int j=0; j<length; j++)
            {
                if( B[i+j]!=A[j] ) break;
                else if( j==length-1 ) temp++;
            }
        }
        ans = ( temp > ans )? temp : ans;
    }
    printf( "%d", ans );

    return 0;
}
