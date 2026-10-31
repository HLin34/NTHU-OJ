#include<stdio.h>
#include<stdlib.h>

int main(){
    double  x, y ;
    int z ;
    scanf("%lf %lf %d",&x,&y,&z);
    printf("%.*lf\n",z, x*y);
    return 0;
}
