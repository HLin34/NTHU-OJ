#include<stdio.h>
#define LL long long int

LL a[100001];
int b[100001];

int gcd( int x, int y )
{
      if( y==0 ) return x;
      else return gcd( y, x % y );
}

int main()
{
    int n, k, base;
    while( scanf( "%d %d", &n, &k )!=EOF )
    {
        int tmp=k, present;
        for(int i=0 ; i<n ; i++)
        {
            scanf( "%lld", &a[i] );
            b[i] = a[i] % k;
            present = gcd ( gcd(k,b[i]),tmp );
            tmp = present;
        }
		base = k / present;
        printf("%d\n",base);
        for(int i=0 ; i<base ; i++)
            ( i != base-1)? printf( "%d ", present*i ) : printf( "%d\n", present*i);
    }

    return 0;
}
