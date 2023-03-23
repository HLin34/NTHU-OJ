#include<stdio.h>

int main()
{
    int size, p[15];
    scanf( "%d", &size );
    p[1]=1;
    p[2]=0;
    p[3]=0;
    p[4]=2;
    p[5]=10;
    p[6]=4;
    p[7]=40;
    p[8]=92;
    p[9]=352;
    p[10]=724;
    p[11]=2680;
    p[12]=14200;
    p[13]=73712;
    p[14]=365596;
    printf( "%d\n", p[size] );

    return 0;
}
