#include<stdio.h>
#define INF 0x3f3f3f3f

int main()
{
    int t;
    scanf("%d", &t);
    int n,m,k;
    int number[5001];
    while( t-- ){
        scanf("%d%d%d", &n, &m, &k);
        if(k >= m)k = m - 1;
        for(int j = 0;j < n;j++){
            scanf("%d", &number[j]);
        }
        int answer = 0;
        int max,tmp;
        for(int x = 0; x <= k; x++){
            tmp = INF;
            for(int y = 0;y <= m - k - 1; y++){
                max=(number[x + y] >= number[x + y + n - m])? number[x + y] : number[x + y + n - m];
                tmp=(max <= tmp)? max : tmp;
            }
            if(tmp >= answer) answer = tmp;
        }
        printf("%d\n", answer);
    }
    return 0;
}
