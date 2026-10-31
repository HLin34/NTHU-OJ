#include<stdio.h>
#include<string.h>
#define LL long long int

LL  cal[100005], prefix[100005], add[100005], a, b, c, d, ans, limit;

int main()
{
    int t;
    scanf( "%d", &t );
    while( t-- )
    {
        ans = 0;
		for( int i=0; i<=100005; i++)
        {
            cal[i] = 0;
            prefix[i] = 0;
            add[i] = 0;
        }
        scanf( "%lld %lld %lld %lld", &a, &b, &c, &d);
        for(int i=a ; i<=b ; i++)
        {
            cal[i+b]++;
            cal[i+c+1]--;
        }
        for(int i=0 ; i<=100001 ; i++)
            prefix[i] = cal[i] + prefix[i-1];
        for(int i=0 ; i<=100001 ; i++)
            add[i] = prefix[i] + add[i-1];

        for(int i=c ; i<=d ; i++){
            limit = ( (i %2)==0 )? 1.5*i-1 : 1.5*i;
            ans = ans + add[limit] - add[i];
        }
        printf( "%lld\n", ans );

    }

    return 0;
}
