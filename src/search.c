#include "search.h"
#include <stdbool.h>

bool search(int a[], int n, int x)
{
    if(n > 0 && a[n-1] == x){ //if n is larger than zero, and the current array int is equal x
        return true;
    }
    else if(n > 0 && a[n-1] != x){ //else if current array is not equal x
        search(a, n - 1,x); //seach the next element in the array
    }
    else{ //else return false as there is no x value in the array
        return false; 
    }

}