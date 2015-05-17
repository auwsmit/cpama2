#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"

#define STACK_SIZE 100

/* external variables */
int contents[STACK_SIZE];
int top = 0;

bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void push(int i)
{
    if (is_full())
        stack_overflow();
    else
        contents[top++] = i;
}

int pop(void)
{
    if (is_empty())
        stack_underflow();
    else
        return contents[--top];
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
