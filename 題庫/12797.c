#include <stdio.h>
#include<string.h>
#define LL long long int

LL  ans[100000], prefix[100000];

int main()
{
    int t;
    scanf( "%d", &t );
    while( t-- )
    {
        int a, b, c, d;
        scanf( "%d %d %d %d", &a, &b, &c, &d );
        for( int i=a; i<=b; i++ )
        {
            int left = i+b;
            int right = i+c+1;
            prefix[left] += 1;
            prefix[right] -= 1;
        }
        for( int i=a+b; i < b+c+1; i++ )
            prefix[i+1] += prefix[i];
        for( int i=c+1; i < b+c+1; i++ )
            ans[c] += prefix[i];
        for( int i=c+1; i<=d; i++ )
            ans[i] = ans[i-1] - prefix[i];
        LL ans_final = 0;
        for( int i=c; i<=d; i++ )
            ans_final += ans[i];
        printf( "%lld\n", ans_final );
        memset( ans, 0, 100000);
        memset( prefix, 0, 100000);
    }
    return 0;
}
