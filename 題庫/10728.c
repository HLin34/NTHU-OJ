#include<stdio.h>
#include<stdlib.h>

int main(void){
    int N, X, Y, Z ;
    scanf("%d %d %d %d",&N, &X, &Y, &Z);
    int a, b ;
    a = X + Y - N + Z ;
    b = X - a ;
    printf("%d %d",a,b);
    return 0;
}
