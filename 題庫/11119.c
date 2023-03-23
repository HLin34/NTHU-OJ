#include<stdio.h>

int main()
{
    int num, ans, a=-1,b=-1, amount=0;
    int arr[20],arr1[20];
    scanf("%d",&num);
    ans=num+1;
    while(num)
    {
        a++;
        arr[a]=num%2;
        num/=2;
    }
    while(ans)
    {
        b++;
        arr1[b]=ans%2;
        ans/=2;
    }
    for(int i=b; b>=0; b--)
    {
        printf("%d",arr1[b]);
    }
    for(int i=0; i<=a; i++)
    {
        if(arr[i]==1) amount++;
        else break;
    }
    printf(" %d",amount);

    return 0;
}
