#include<stdio.h>
#include<stdlib.h>

int main(void){
    int A, B, C ;
    int a, b, c ;
    scanf("%d %d %d",&A, &B, &C);
    int sum = (A+B+C)/2 ;
    a = sum - B ;
    b = sum - C ;
    c = sum - A ;
    printf("%d %d %d\n",a, b, c);
    return 0;
}
