#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include <stdbool.h>

typedef int Item;
typedef struct stack_type *Stack;

static void terminate(const char* message);
Stack create(void);
void destroy(Stack s);
void make_empty(Stack s);
bool is_empty(Stack s);
void push(Stack s, Item i);
Item pop(Stack s);

#endif
