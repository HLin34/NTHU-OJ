#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char str[1005][1005], *ret;
int n;
int cmp(char *a,char *b)
{
    return strlen(a)-strlen(b);
}

int main()
{
    scanf("%d", &n);
    for( int i=0 ; i<n ; i++ ) scanf("%s", str[i]);
    qsort( str, n, 1005*sizeof(char), cmp );
    for( int i=0 ; i<n-1 ; i++ )
    {
        ret = strstr( str[i+1], str[i] );
        if(ret==NULL)
        {
            printf("NO\n");
            break;
        }
        else if( ret != NULL && i == n-2 )
        {
            printf("YES\n");
            for( int j=0 ; j<n ; j++ ) printf("%s\n",str[j]);
        }
    }

    return 0;
}
