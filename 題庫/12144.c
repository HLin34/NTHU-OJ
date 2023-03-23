#include<stdio.h>

int n, hp, atk, mx[30], my[30], mhp[30], matk[30], ans=0;
int re( int x, int y, int hp )
{
    if( x<6 && y<6 )
    {
        for( int i=0 ; i<n ; i++ )
        {
            if( x==mx[i] && y==my[i] )
                hp = ( hp-matk[i]*(mhp[i]/atk) );
        }
        if(hp>0)
        {
            re(x+1,y,hp);
            re(x,y+1,hp);
        }
    }
    else if( hp>0&&((x==6&&y==5) || (y==6&&x==5)) )  ans=1;
}
int main()
{
    scanf("%d %d %d", &hp, &atk, &n);
    for( int i=0 ; i<n ; i++ )  scanf("%d %d %d %d", &mhp[i], &matk[i], &mx[i], &my[i]);
    re( 1, 1, hp );
    if( ans==1 ) printf("HEIR OF FIRE DESTROYED\n");
    else if( ans==0 )  printf("YOU DIED\n");

    return 0;
}
