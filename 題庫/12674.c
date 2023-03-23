#include<stdio.h>

int main()
{
    int n;
    long long int r,g,b;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        scanf("%lld %lld %lld",&r, &g, &b);
        if(r>=g&&r>=b){
            if ((g+b)>=r) printf("%lld\n",(r+g+b)/2);
            else printf("%lld\n",g+b);
        }
        else if(g>=r&&g>=b){
            if ((r+b)>=g) printf("%lld\n",(r+g+b)/2);
            else printf("%lld\n",r+b);
        }
        else if(b>=r&&b>=g){
            if ((g+r)>=b) printf("%lld\n",(r+g+b)/2);
            else printf("%lld\n",g+r);
        }
    }

    return 0;
}
