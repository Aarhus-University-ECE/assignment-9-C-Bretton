#include "sum.h"

int sum(int a[], int n)
{
    //using recursion to sum the array
    if(n > 0){ //if n is larger than 0
        return a[n-1] + sum(a ,n - 1); //return the value of the array + the sum of the next element in the array (recursive)
    }
    else if(n == 0){ //if n is 0 then return 0
        return 0;
    }

}