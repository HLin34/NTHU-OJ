#include<stdio.h>

int main()
{
    char a, b, c, d, e, f;
    scanf("%c%c%c.%c%c%c",&a, &b, &c, &d, &e, &f);
    int sum1=0,sum2=0;
    sum2 = (d+f-96)*101+(2*e-96)*10;
    sum1 = (a+c-96)*101+(2*b-96)*10;
    if(sum2>=1000)
    {
        sum2-=1000;
        sum1+=1;
    }
    printf("%d.%d",sum1, sum2);

    return 0;
}
