#include<stdio.h>
#define MAX_N 100001

typedef struct {
    long long int al,ln,idx;
} ST;

ST a[MAX_N];

int cmp( const void *a, const void *b )
{
    ST A = *(ST*)a;
    ST B = *(ST*)b;
    if( A.al != B.al ) return A.al-B.al;
    else if ( A.al==B.al && A.ln!=B.ln ) return A.ln-B.ln;
    else return A.idx-A.idx;
}
int main (){
    long long int n,x,y;
    scanf( "%lld", &n );
    for( int i=1 ; i<=n ; i++ )
    {
        scanf("%lld %lld", &a[i].al, &a[i].ln);
        a[i].idx = i;
    }
    qsort( a+1, n, sizeof(a[1]), cmp );
    for( int i=1 ; i<=n ; i++ )
    {
		if( i != n ) printf("%lld ", a[i].idx);
		else printf("%lld\n", a[i].idx);
	}
    return 0;
}
