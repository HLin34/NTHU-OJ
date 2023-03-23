#include<stdio.h>
#define LL long long int

LL n, k, q, f, ans, a[1000005], f;

LL BS( LL a[], LL key )
{
    LL min=1, max=n;
    while( min<=max )
    {
        LL mid = ( min + max) / 2;
        if( a[mid] > key ) max = mid -1;
        else if( a[mid] < key ) min = mid+1;
        else return mid;
    }
    if( max < 1 ) return 1;
    else return min;
}

int main()
{
    scanf( "%lld %lld %lld", &n, &k, &q );
    for ( int i=1; i<=n; i++ ) scanf( "%lld", &a[i] );
    while( q-- )
    {
        scanf( "%lld", &f );
        if( f > a[n] )
        {
            printf( "gan ni nya sai bau\n");
            continue;
        }
        ans = BS( a, f );
        if( ans > k ) printf( "%lld\n", ans-k );
        else if( ans <= k && a[ans] != a[k+1] ) printf( "%lld\n", n-k+ans );
        else if( ans <= k && a[ans] == a[k+1] ) printf( "1\n");
    }

    return 0;
}
