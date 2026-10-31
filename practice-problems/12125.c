#include<stdio.h>

long long int a[1000005], total, test, i, test1, test2;

int main(void){
    scanf("%lld %lld",&total,&test);
    a[0]=0;
    for(i=1; i<=total; i++){
        scanf("%lld(/`A`)/ ~I__I ",&a[i]);
        a[i]+=a[i-1];
    }
    for(i=1; i<=test; i++){
        scanf("%lld %lld", &test1, &test2);
        printf("%lld\n",a[test2]-a[test1-1]);
    }
    return 0;
}
