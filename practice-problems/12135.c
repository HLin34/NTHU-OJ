#include<stdio.h>

double max=0, average, num, prefix[10000]={0};

int main()
{
    int n, k;
    scanf( "%d %d", &n, &k );
    for( int i=0; i<n; i++)
    {
        scanf("%lf",&num);
        prefix[i]=(i>0)?  prefix[i-1] + num : num ;
    }
    for( int i=k; i<=n; i++)
    {
        int count = i;
        for( int j=0; j<=n-k; j++)
        {
            average = ( prefix[i+j-1] - prefix[j-1] ) / count;
            max = (average > max )? average : max ;
        }
    }
    printf( "%.3lf\n", max );

    return 0;
}
