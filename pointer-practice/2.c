#include<stdio.h>
#include<string.h>

void show ( char* p );
void swap ( char* p, char* q );
void permutation( char* p );

int main()
{
    char str[10];
    str[0] = '\0';
    scanf( "%8s", str+1 );
    //  "\0, x, x, x, x, ..... \0" //
    permutation( str+1 );
    return 0;
}

void show ( char *p )
{
    if( *p != '\0' )
    {
        show( p - 1 );
        printf( "%c", *p );
    }
}

void swap( char *p, char *q )
{
    char tmp;
    tmp = *p;
    *p = *q;
    *q = tmp;
}

void permutation( char *p )
{
    if( p[0] == '\0' )
    {
        show( p-1 );
        printf( "\n" );
    }else
    {
        for( int i=0; i< strlen(p); i++ )
        {
            swap( p, p+i );
            permutation( p+1 );
            swap( p, p+i );
        }
    }
}
