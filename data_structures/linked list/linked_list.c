// https://www.geeksforgeeks.org/insertion-in-linked-list/
// https://www.geeksforgeeks.org/deletion-in-linked-list/
#include <stdio.h>

struct Node
{
    int val;
    struct Node *next;    
};

// methods to insert a new node in the linked list are discussed. A node can be added in three ways 
// 1. Add a node at the front:
/* Given a reference (pointer to pointer) to the head of a list
   and an int,  inserts a new node on the front of the list.
*/
void push(struct Node **head_ref, int new_val)
{
    /* 1. allocate node */
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    
    /* 2. put in the data  */
    new_node->val = new_val;

    /* 3. Make next of new node as head */
    new_node->next = (*head_ref);
    
    /* 4. move the head to point to the new node */
    (*head_ref) = new_node;
}


/* Given a node prev_node, insert a new node after the given
prev_node */
void insertAfter(struct Node* prev_node, int new_data)
{
    /*1. check if the given prev_node is NULL */
    if (prev_node == NULL)
    {
        printf("prev_node 不得為 NULL");
        return;
    }

    /* 2. allocate new node */
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    
    /* 3. put in the data */
    new_node->val = new_data;

    /* 4. Make next of new node as next of prev_node */
    new_node->next = prev_node->next;
    
    /* 5. move the next of prev_node as new_node */
    prev_node->next = new_node;

}

/* Given a reference (pointer to pointer) to the head
   of a list and an int, appends a new node at the end  */
void apped(struct Node **head_ref, int new_data)
{
    /* 1. allocate node */
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    struct Node *last = *head_ref;

    /* 2. put in the data  */
    new_node->val = new_data;
  
    /* 3. This new node is going to be the last node, so make next 
          of it as NULL*/
    new_node->next = NULL;

    /* 4. If the Linked List is empty, then make the new node as head */
    if (*head_ref == NULL)
    {
       *head_ref = new_node;
       return;
    }  
       
    /* 5. Else traverse till the last node */
    while (last->next != NULL)
        last = last->next;
   
    /* 6. Change the next of last node */
    last->next = new_node;
    return;

}

void deleteNode(struct Node **head_ref, int target_val)
{
    struct Node *temp = *head_ref, *prev_node;

    if (temp != NULL && temp->val == target_val)
    {
        *head_ref = temp->next;
        free(temp);
        return;
    }

    while(temp != NULL && temp->val != target_val)
    {
        prev_node = temp;
        temp = temp->next;
    }

    if (temp == NULL)
    {
        return;
    }

    prev_node->next = temp->next;

    free(temp);
}
