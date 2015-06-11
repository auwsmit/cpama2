#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"

#define STACK_SIZE 100

struct stack_type {
    char contents[STACK_SIZE];
    int top;
};

static void terminate(const char* message)
{
    printf("%s", message);
    exit(EXIT_FAILURE);
}

Stack create(void)
{
    Stack s = malloc(sizeof(struct stack_type));
    if (s == NULL)
        terminate("Error in create: stack could not be created\n");
    s->top = 0;
    return s;
}

void destroy(Stack s)
{
    free(s);
}

void make_empty(Stack s)
{
    s->top = 0;
}

bool is_empty(Stack s)
{
    return s->top == 0;
}

bool is_full(Stack s)
{
    return s->top == STACK_SIZE;
}

void push(Stack s, char i)
{
    if (is_full(s))
        terminate("Too many characters\n");
    s->contents[s->top++] = i;
}

char pop(Stack s)
{
    if (is_empty(s))
        terminate("Too many right parentheses/braces\n\n");
    return s->contents[--s->top];
}
