#include "sort.h"

/**
 *swap - swap
 *@x:x
 *@y:y
 */

void swap(int x, int y)
{
    int temp = *x;
    x =y;
    *y = temp;
}


/**
 *selection_sort - selection sort
 *@arr: array
 *@n: n
 */

void selection_sort(int arr[], int n)
{
        int i, j, k;
    for (i = 0; i < n-1; i++)
    {
        k = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[k])
            k = j;

           if(k != i)
            swap(&arr[k], &arr[i]);
    }
}
