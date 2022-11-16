#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b)
{
    int tmp= *a;
    *a = *b;
    *b = tmp;
}

// A function to implement bubble sort
void BubbleSort(int ary[], int n)
{
    int i,j;
    for (i=0;i<n-1;i++)
    {
        for (j=0;j<n-1-i;j++)
        {
            if (ary[j]>ary[j+1]) swap(&ary[j], &ary[j+1]);
        }
    }

    return 0;
}

struct Node
{
    int val;
    struct Node* next;
};

void swap(struct Node* a, struct Node* b)
{
    int tmp = a->val;
    a->val = b->val;
    a->val = tmp;

}

void BubbleSort(struct Node* head)
{
    /*
    struct Node* cur = head;

    if (cur == NULL || cur->next == NULL) return head;

    while (cur)
    {
        if (cur->val > cur->next->val) swap(cur, cur->next);

        cur = cur->next;
    }
    */
    
    // avoid circular linked list
    struct Node* ptr1 = head;
    struct Node* lptr = NULL;

    if (head == NULL)
    {
        return;
    }   

    while (ptr1->next != lptr)
    {
        if (ptr1->val > ptr1->next->val)
        {
            swap(ptr1, ptr1->next);
        }

        ptr1 = ptr1->next;
    }
    
    lptr = ptr1;
}

int main()
{
    
    int ary[5] = {10, 5, 21, 9 ,11};
    int n;
    BubbleSort(ary, 5);
    for (n=0;n<5;n++)
    {
        printf("%d\n",ary[n]);
    }
    
    return 0;
}
