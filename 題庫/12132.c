#include<stdio.h>

int main(void)
{
    int a[200001], eat[200001]={0}, num, i, ans, b, nexteat=1;
    scanf("%d",&num);
    for(i=1; i<=num; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1; i<=num; i++)
    {
        scanf("%d",&b);
        ans=0;
        while(!eat[b])
        {
            ans++;
            eat[ a[nexteat] ] = 1 ;
            nexteat++;
        }
        if(i<num) printf("%d ",ans);
        else printf("%d",ans);
    }
    printf("\n");

    return 0;
}
