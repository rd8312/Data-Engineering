#include <stdlib.h>
#include <stdio.h>

int insertionSort(int arr[], int n)
{
    int i, j;
    int key;
    
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i-1;

        while( j>=0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    } 
}