#include<stdio.h>

int main(void){
    int a,b,c,d;
    scanf("%d.%d %d.%d",&a,&b,&c,&d);

    int sum=10000*(a*c)+100*(a*d+c*b)+(b*d);
    printf("%d.%04d\n",sum/10000,sum%10000);
  return 0;
}
