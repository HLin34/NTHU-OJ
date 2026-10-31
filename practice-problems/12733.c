#include<stdio.h>
#include<string.h>
#define ll long long int

char ans[501];
int tmp[10000000] = {0};
ll x;
ll up = 1000000007;
ll newlength;
int flag=1;

ll count( ll now, ll length )
{
    newlength = length + (tmp[now]-1)*(length-(now+1));
    // tmp[now]-1 is because the length already included the original one
    // And now is starting at 0, so length-(now+1)
    // x-up+a*[(x-up)-b]=x+up+ax-aup-ab
    if( newlength < 0 )
        newlength += up;
    if( length <= 1000000 && flag==1)
    {
        for( int i=length; i<newlength; i++ )
            tmp[i] = tmp[i-length+now+1];
    }

    if( newlength > up )
    {
        newlength = newlength%up;
        flag=0;
    }
    if( now==x )
        return length;
    else
        return count( now+1, newlength);
}

int main()
{
    int t;
    scanf( "%d", &t );
    while(t--)
    {
        flag = 1;
        scanf( "%lld", &x );
        scanf( "%s", &ans);
        ll slen = strlen(ans);
        for( int i=0; i<slen; i++ )
            tmp[i] = ( (int)ans[i] - 48 );
     // ans[i] is claimed by char (character), when turned into int it need to minus 48, which is 0 in the ASCII code
        printf( "%lld\n", count(0,slen) );
    }
}
