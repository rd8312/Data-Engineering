#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
    int i,j;

    for (i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1]) swap(&arr[j], &arr[j+1]);
        }    
    }
    
    return 0;
}

int main()
{
    int ary[5] = {10, 5, 21, 9 ,11};
    int n;
    bubbleSort(ary, 5);
    for (n=0;n<5;n++)
    {
        printf("%d\n",ary[n]);
    }
    
    return 0;
}
