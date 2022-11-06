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

/*
// implement bubble sort by linked list
struct Node
{
    int val;
    struct Node *next;
};
    
void swap(struct Node* node_1, struct Node* node_2)
{
    int temp = node_1->val;
    node_1->val = node_2->val;
    node_2->val = temp;
}

void bubbleSort(struct Node *head)
{
    int swapped;
    struct Node *ptr1;
    struct Node *lptr = NULL; // avoid circular linked list

    if (head == NULL)
    {
        return;
    }

    do
    {
        swapped = 0;
        ptr1 = head;

        while (ptr1->next != lptr)
        {
            if (ptr1->val > ptr1->next->val)
            {
                swap(ptr1, ptr1->next);
                swapped = 1;
            }

            ptr1 = ptr1->next;
        }

        lptr = ptr1;
    } while (swapped);
}
*/

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
