#include<stdio.h>

int main(){
    int x, y, sum, arr[50], i=0;
    scanf("%x\n%x",&x, &y);
    sum= x+y;
    while(sum){
        arr[i]=sum%2;
        sum/=2;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        printf("%d",arr[j]);
    }

    return 0;
}
