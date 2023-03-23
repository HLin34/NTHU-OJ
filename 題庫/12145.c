#include<stdio.h>

int arr[500];

int main()
{
    long long int n;
    int flag = 0;
    scanf( "%lld", &n );
    for( long long int i=0; i<n; i++ )
    {
        char c;
        scanf( " %c", &c );
        int k = (int) c ;
        if( arr[k] == 0 )
            arr[k]++;
        else
        {
            flag =1;
            break;
        }
    }
    if( flag == 1 || n == 1 )
         printf("I'm the god of Knuckles!");
    else
        printf("Different makes perfect");

    printf("\n");

    return 0;
}
