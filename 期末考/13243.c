#include<stdio.h>
#include<string.h>

char substr[3050], str[3050];
int numsubstr, numstr, max, series, sum, left[3050], right[3050], head[3050];

void calculate( char* , char* );

int main()
{
    int t;
    scanf( "%d", &t );
    while( t-- )
    {
        scanf( "%d", &numsubstr );
        scanf( "%s", substr );
        scanf( "%d", &numstr );
        scanf( "%s", str );
        sum=0;
        for( int i=numstr ; i>0 ; i-- )
            str[i]=str[i-1];
        for( int i=numsubstr ; i>0 ; i-- )
            substr[i]=substr[i-1];
        calculate( substr, str );
        memset( head, 0, sizeof(head) );
        memset( left, 0, sizeof(left) );
        memset( right, 0, sizeof(right) );
        memset( substr, 0, sizeof(substr) );
        memset( str, 0, sizeof(str) );
    }

    return 0;
}

void calculate( char* sub, char* strs )
{
    for( int i=1; i<=numstr; i++ )
    {
         if( head[i]!=0 ) continue;
        max=0;
        for( int j=1; j<=numsubstr; j++ )
        {
            if( strs[i] == sub[j] )
            {
                int row = 1;
                while( strs[i+row] == sub[j+row] && (j+row) <= numsubstr )
                    row++;
                if( max < row )
                {
                    max = row;
                    left[i] = j;
                    right[i] = j+row-1;
                    series = row;
                }
            }
            if( strs[i] == sub[numsubstr+1-j] )
            {
                int row = 1;
                while( strs[i+row] == sub[numsubstr+1-j-row] && numsubstr+1-j-row > 0 )
                    row++;
                if( max < row )
                {
                    max = row;
                    left[i] = numsubstr+1-j;
                    right[i] = (numsubstr+1)-j-row+1;
                    series = row;
                }
            }
        }
        if( max == 0 ) break;
        else
        {
            head[i] = 2;
            for( int j=i+1; j<i+series; j++ )
                head[j] = 1;
        }
    }
    if( max == 0 ) printf( "-1\n" );
    else
    {
        for( int i=1; i<=numstr; i++ )
            if( head[i] == 2 ) sum++;
        printf( "%d\n", sum );
        for( int i=1; i<=numstr; i++ )
            if( head[i] == 2 ) printf( "%d %d\n", left[i], right[i] );
    }

    return;
}
