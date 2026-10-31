#include<stdio.h>
#include<stdlib.h>

int main(void){
    int N, group, num;
    scanf("%d",&N);
    group=N/3;
    num=N-group;
    if(N%3==0) num++;
    printf("%d\n",num);

return 0;
}
