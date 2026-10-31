#include <stdio.h>
int tmp[10000]= {0};
int main()
{
    int t, n, m, k;
    scanf("%d", &t);
    while(t--)
    {
        int ans = -1;//最終解
        scanf("%d%d%d", &n, &m, &k);
        for(int i=0; i<n; i++)
            scanf("%d", &tmp[i]);

        if(k>=m)//選最大的
        {
            for(int i=0; i<m; i++)
            {
                if(ans<tmp[i])
                    ans = tmp[i];
                if(ans<tmp[n-1-i])
                    ans = tmp[n-1-i];
            }
        }
        else
        {
            int gap = m-k-1;//在我前面且不能被我操控的人数
            for(int i=0; i<=k; i++) //窮舉
            {
                int head = 0;
                int tail = n-1;
                int tmpans = -1;//此次窮舉至少為多少(初始=-1)
                head += i;
                tail -= k-i;
                for(int j=0; j<=gap; j++)
                {
                    int copyh = head;
                    int copyt = tail;
                    copyh += j;
                    copyt -= gap-j;
                    if (tmp[copyh]>tmp[copyt])
                    {
                        if (tmpans == -1)//如果是初始值就直接套用
                            tmpans = tmp[copyh];
                        if (tmpans > tmp[copyh])//如果比原本小則更新tmpans
                            tmpans = tmp[copyh];
                    }
                    else
                    {
                        if (tmpans == -1)//如果是初始值就直接套用
                            tmpans = tmp[copyt];
                        if (tmpans > tmp[copyt])//如果比原本小則更新tmpans
                            tmpans = tmp[copyt];
                    }
                }
                if (tmpans > ans)
                    ans = tmpans;
            }
        }
        printf("%d\n",ans);
    }
}
