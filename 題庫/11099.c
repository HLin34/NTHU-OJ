#include<stdio.h>
#include<stdlib.h>

int main(void){
    int a, b, c;
    int A, B, C;
    /*  A=a+b   B=b+c   C=c+a;*/
    scanf("%d %d %d",&A,&B,&C);
    int sum=(A+B+C)/2;
    //a+b+c=(A+B+C)/2
    a=sum-B;
    b=sum-C;
    c=sum-A;
    printf("%d %d %d\n",a,b,c);
    return 0;
}
