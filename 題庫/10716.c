#include<stdio.h>
#include<stdlib.h>

int main(void){
    int a, n, d ;
    scanf("%d %d %d",&a, &n, &d);
    int i , sum = a ;
    for(i=1;i<n;i++){
        a += d ;
        sum += a ;
    }
    printf("%d %d",a, sum);
    return 0;
}
