#include<stdio.h>
#include<string.h>

char A[100001];
char B[100001];

int True( int a, int b, int length )
{
    if( length%2==0 )
    {
        int lennew = length/2;
        int anew = a+lennew;
        int bnew = b+lennew;
        return( ( True( a, b, lennew ) && True( anew, bnew, lennew) ) || ( True( a, bnew, lennew ) && True( anew, b, lennew ) ) );
    }
    if( length%2==1 )
    {
        for( int i=0; i<length; i++ )
        {
            if( A[i+a]!=B[i+b])
                return 0;
            else if( i==length-1 )
                return 1;
        }
    }
}

int main()
{
    scanf( "%s", A );
    scanf( "%s", B );
    if( True( 0, 0, strlen(A) ) )
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
