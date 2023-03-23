#include<stdio.h>
#include<string.h>

char s[2001];

int main()
{
    int ans, l=0, r=0;
    int len;
    while ( scanf( "%s", s ) != EOF )
    {
        len = strlen(s);
        ans = 0;
        for( int i=0; i<len; i++)
        {
            while( s[i+l] == s[i+1+r] && ( i+1+r < len && i+1 >= 0 ) )
            {
                ans++, l--, r++;
            }
            l=0, r=0;
            while( s[i+l] == s[i+2+r] && ( i+2+r < len && i+1 >= 0 ) )
            {
                ans++, l--, r++;
            }
            l=0, r=0;
        }
        printf( "%d\n", ans );
    }

    return 0;
}
