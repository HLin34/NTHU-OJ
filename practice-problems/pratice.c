#include<stdio.h>
#define INF 0x7fffffff

int a[10000]= {0};

int main()
{
    int t, m, n, k;
    scanf("%d",&t);
    while(t--)
    {
        int ans=0;
        scanf("%d%d%d",&n, &m, &k);
        for(int i=0; i<n; i++)  scanf("%d",&a[i]);
        if(k>=m)
        {
            for(int i=0; i<m; i++)
            {
                if(ans<a[i]) ans = a[i];
                if(ans<a[n-1-i]) ans=a[n-1-i];
            }
        }
        else
        {
            int gap=m-k-1;
            for(int i=0; i<=k; i++)
            {
                int front=0, back=n-1, temp=INF;
                front += i;
                back -= k-i;
                for(int j=0; j<=gap; j++)
                {
                    int gapf=front,gapb=back;
                    gapf += j;
                    gapb -= gap-j;
                    (a[gapf]>a[gapb])? (temp=(temp>a[gapf])? a[gapf]:temp):(temp=(temp>a[gapb])? a[gapb]:temp);

                }
                if(temp>ans) ans=temp;
            }
        }
        printf("%d\n",ans);
    }

    return 0;
}
