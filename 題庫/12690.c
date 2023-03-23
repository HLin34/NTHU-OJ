#include<stdio.h>

int main()
{
    int n,sumL=0,sumR=0;
    char command;
    int i;
    scanf("%d\n",&n);
    for(i=0; i<n; i++)
    {
        scanf("%c",&command);
        switch(command)
        {
        case'L':
            sumL+=1;
            break;
        case'R':
            sumR+=1;
            break;
        }
    }

    printf("%d %d\n", sumL, sumR);
    printf("%d\n",sumL+sumR+1);

    return 0;
}
