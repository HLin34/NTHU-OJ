#include<stdio.h>

char str;

int main()
{
    while(1){
        str=getchar();
        if(str==EOF) break;
        printf("%c",str);
    }

    return 0;
}
