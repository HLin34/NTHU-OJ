#include<stdio.h>
#include<stdlib.h>

int main(void){
    int time;
    scanf("%4d",&time);
    if(time>=0000&&time<1200){
        printf("%02d:%02d a.m.",time/100,time%100);
    }else{
        printf("%02d:%02d p.m.",time/100-12,time%100);
    }
system("PAUSE");
return 0;
}
