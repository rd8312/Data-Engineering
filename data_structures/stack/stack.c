#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

/*
// implement by array
struct Stack
{
    int top;
    unsigned int capacity;
    int *arr;
};

struct Stack *create_stack(unsigned int capacity)
{
    struct Stack *stack = (struct Stack *)malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1; // there is no element.
    stack->arr = (int *)malloc(stack->capacity * sizeof(int));
    return stack;
}

int is_full(struct Stack *stack)
{
    return stack->top == stack->capacity - 1; // top is on the last in the stack.
}

int is_empty(struct Stack *stack)
{
    return stack->top == -1;
}

void push(struct Stack *stack, int item)
{
    if (is_full(stack))
    {
        return;
    }

    stack->arr[++stack->top] = item;
    printf("%d pushed to stack\n", item);
}

int pop(struct Stack *stack)
{
    if (is_empty(stack))
    {
        return INT_MIN;
    }

    return stack->arr[stack->top--];
}

int peek(struct Stack *stack)
{
    if (is_empty(stack))
    {
        return INT_MIN;
    }

    return stack->arr[stack->top];
}

int main()
{
    struct Stack *stack = create_stack(100);

    push(stack, 10);
    push(stack, 22);
    push(stack, 33);

    printf("%d peeked from stack\n", peek(stack));
    printf("%d popped from stack\n", pop(stack));

    return 0;
}
*/

struct Stack_Node
{
    int val;
    struct Stack_Node *next;
};

struct Stack_Node *new_node(int val)
{
    struct Stack_Node *stack_node = (struct Stack_Node *)malloc(sizeof(struct Stack_Node));
    stack_node->val = val;
    stack_node->next = NULL;
    return stack_node;
}

int is_empty(struct Stack_Node *root)
{
    return !root;
}

void push(struct Stack_Node **root, int val)
{
    struct Stack_Node *stack_node = new_node(val);
    stack_node->next = *root;
    *root = stack_node;
    printf("%d pushed to stack\n", val);
}

int pop(struct Stack_Node **root)
{
    if (is_empty(*root))
    {
        return INT_MIN;
    }

    struct Stack_Node *temp = *root;
    *root = (*root)->next;
    int popped = temp->val;
    free(temp);

    return popped;
}

int peek(struct Stack_Node *root)
{
    if (is_empty(root))
    {
        return INT_MIN;
    }

    return root->val; // (*root).val
}

int main()
{
    struct Stack_Node *root = NULL;

    push(&root, 10);
    push(&root, 22);
    push(&root, 33);

    printf("%d popped from stack\n", pop(&root));

    printf("Top element is %d\n", peek(root));

    return 0;
}
