#include "stdio.h"
#include "stdlib.h"

struct StackElem
{
    int               value;
    struct StackElem *_next;
};

struct Stack
{
    struct StackElem *_first;
};

struct Stack new_stack()
{
    struct Stack stack = {._first = NULL};
    return stack;
}

void push(struct Stack *stack, int value)
{
    struct StackElem *new_elem = malloc(sizeof(struct StackElem));
    new_elem->value            = value;
    new_elem->_next            = stack->_first;
    stack->_first              = new_elem;
}

int pop(struct Stack *stack)
{
    if (stack->_first == NULL)
    {
        return -1;
    }
    else
    {
        struct StackElem *elem = stack->_first;
        stack->_first          = elem->_next;
        return elem->value;
    }
}

int peek(struct Stack *stack)
{
    if (stack->_first == NULL)
    {
        return -1;
    }
    else
    {
        return stack->_first->value;
    }
}

int main()
{
    struct Stack stack = new_stack();

    // Push thrice
    push(&stack, 1);
    push(&stack, 2);
    push(&stack, 3);

    // Pop all elements
    printf("%d\n", pop(&stack));
    printf("%d\n", pop(&stack));
    printf("%d\n", pop(&stack));

    // Attempt to pop once more
    printf("%d\n", pop(&stack));

    return 0;
}
