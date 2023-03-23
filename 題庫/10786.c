#include<stdio.h>
#include<stdlib.h>

int main(void){
    int second, third, fourth ;
    scanf("%d %d %d",&second, &third, &fourth);
    int first, fifth;

    if((third-second)==(fourth-third)){
        int differrence = (third - second);
        first = (second - differrence) ;
        fifth = (first + 4*differrence) ;
        printf("%d %d", first, fifth);
    }else if((third/second)==(fourth/third)){
        int ratio = third/second;
        first = second/ratio ;
        fifth = fourth*ratio ;
        printf("%d %d", first, fifth);
    }
    return 0;
}
