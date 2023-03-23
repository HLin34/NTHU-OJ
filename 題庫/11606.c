#include <stdio.h>
#include <stdlib.h>
#define max(a,b) a>b? a:b

int a, b, t, count, num;

int main(void){
    scanf("%d",&t);
    while(t--){
        int maxcount=0,max=0;
        scanf("%d %d",&a,&b);
        for(int i=a;i<=b;i++){
            count=0;
            for(int j=1; j*j<=i;j++){
                if(i%j==0&&j*j!=i) count=count+2 ;
                else if(i%j==0&&j*j==i) count++;
            }
            if(count>maxcount){
                maxcount=count;
                max=i;
            }
        }
    printf("%d\n",max);
    }

    return 0;
}
