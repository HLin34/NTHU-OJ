#include<stdio.h>

int n,times,ans=0;

typedef struct
{
    int hp , atk , x , y
} obj;

void dfs(int x , int y , obj hero , obj mon[30])
{
    if(x<6 && y<6 && !(x==5&&y==5))
    {
        for(int i=1 ; i<=n ; i++)
        {
            if(x==mon[i].x && y==mon[i].y)
            {
                int times = ( mon[i].hp / hero.atk );   //how many times about the attack from the monster
                hero.hp= hero.hp - (mon[i].atk*times);
            }
        }
        if( hero.hp>0 )
        {
            dfs(x+1,y,hero,mon);
            dfs(x,y+1,hero,mon);
        }
    }
    else if(x==5 && y==5)
    {
          for(int i=1 ; i<=n ; i++)
          {
              if(mon[i].x==5 && mon[i].y==5)
              {
                  times = ( mon[i].hp / hero.atk );
                  hero.hp = hero.hp - (mon[i].atk*times);
              }
          }
          if( hero.hp > 0 ) ans=1;
    }
}
int main()
{
    obj hero, mon[30];
    scanf("%d %d %d", &hero.hp, &hero.atk, &n );
    for(int i=1 ; i<=n ; i++) scanf("%d %d %d %d", &mon[i].hp, &mon[i].atk, &mon[i].x, &mon[i].y);
    dfs(1,1,hero,mon);
    if( ans==1 ) printf("HEIR OF FIRE DESTROYED\n");
    else if( ans==0 ) printf("YOU DIED\n");

    return 0;
}
