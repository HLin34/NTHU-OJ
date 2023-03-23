#include <stdio.h>
#define MAX_SIZE 50
#define LOWER_LIMIT 0
#define UPPER_LIMIT 1000000

int main(void)
{
    int data[MAX_SIZE];
    int i, j, size;
    int *pi, *pj;
    int maxval=LOWER_LIMIT, minval=UPPER_LIMIT;

    for (size = 0; size < MAX_SIZE; size++) {
        if (scanf("%d", &data[size]) != 1)
            break;
    }
    for (pi = data, pj=data+size-1; pi <= pj; pi++, pj--) {
            if(*pi>*pj)
            {
                if(*pi>maxval)
                    maxval = *pi;
                if(*pj<minval)
                    minval = *pj;
            }else if(*pj>*pi)
            {
                if(*pj>maxval)
                    maxval = *pj;
                if(*pi<minval)
                    minval = *pi;
            }
    }
    printf("%d %d\n", minval, maxval);

    return 0;
}
