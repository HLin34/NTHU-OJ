#include "function.h"

int BS( int *tmp, int target, int length )
{
    int L = 0;
    int R = length;
    while( L < R )
    {
        int mid = ( L +R ) / 2;
        if( tmp[mid] == target )
            return mid;
        else if( tmp[mid] > target )
            R = mid;
        else
            L = mid;
    }
}
