#include<stdio.h>
#include<stdlib.h>

 int prefix[1000001]={0};

int main(void)
{
    int n, a, b, ans=0;;
    for(int i=1; i<=1000001; i++){
        int x=i;
        while(x){
            if((x%10)==1) ans+=1;
            x/=10;
        }
        prefix[i]=ans;
    }
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        scanf("%d %d",&a, &b);
        printf("%d\n",prefix[b]-prefix[a-1]);
    }


    return 0;
}
