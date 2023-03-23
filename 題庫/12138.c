#include<stdio.h>

 long long int pre[1000001];

int main()
{
    int n, q, l, r, m;
    scanf("%d %d",&n, &q);
    for(int i=1; i<=n; i++){
        long long int num;
        scanf("%lld",&num);
        if (num<0) num=0;
        pre[i]=pre[i-1]+num;
        }
    for(int i=1; i<=q; i++){
        scanf("%d %d %d",&l, &r, &m);
        long long int ans = pre[l+m-1] - pre[l-1];
        printf("%lld\n", ans);
        }

    return 0;
}
