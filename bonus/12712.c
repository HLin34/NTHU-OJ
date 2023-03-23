#include <stdio.h>;
#define MAX 2000000000
#define LL long long int
LL a[64];
LL search( LL x );

int main(){
    int t;
    LL n;
    scanf( "%d", &t );
    a[0]=1;
    for( int i=1; i<64; i++ ) a[i] = a[i-1] * 2;
    while(t--){
        scanf( "%lld", &n );
        printf( "%lld\n", search(n) );
    }
    return 0;
}

LL search ( LL x ){
    LL k, r, mid, cal, guess, ans=9000000000000000000;
    for( int i=0; i<64; i++ ){
        if( x == a[i]-1 ){
            if( ans > a[i] )  ans = a[i];
        }
        if( a[i] > x ) break;
        k = 0;
        r = MAX;
        while( r>k ){
            mid = (r+k) / 2;
            if( mid%2 == 0 )  cal = mid-1;
            else cal = mid;
            guess = ( a[i]-1 ) + ( cal-1 ) / 2;
            if( guess*cal == x ){
                if( ans > a[i]*cal ) ans = a[i]*cal;
                break;
            }
            if( guess > x/cal ) r = mid-1;
            else k = mid+1;
        }
    }
    if(ans==9000000000000000000) return -1;
    else return ans;
}
