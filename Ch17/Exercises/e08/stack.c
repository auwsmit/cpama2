#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"

/* external variables */
struct node {
    int value;
    struct node *next;
};

struct node *top = NULL;

bool is_empty(void)
{
    return top == NULL;
}

bool push(int i)
{
    struct node *new = malloc(sizeof(struct node));

    if (new == NULL)
        return false;
    if (is_empty())
        new->next = NULL;
    else
        new->next = top;
    new->value = i;
    top = new;
    return true;
}

int pop(void)
{
    struct node *to_free;

    if (is_empty())
        stack_underflow();

    int to_pop = top->value;
    to_free = top;
    top     = to_free->next;
    free(to_free);

    return to_pop;
}

void stack_overflow()
{
    printf("Expression is too complex\n\n");
    exit(EXIT_FAILURE);
}

void stack_underflow()
{
    printf("Not enough operands in expression\n\n");
    exit(EXIT_FAILURE);
}
