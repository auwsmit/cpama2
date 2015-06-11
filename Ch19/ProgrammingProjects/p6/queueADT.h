#ifndef QUEUE_H
#define QUEUE_H

#include <stdio.h>
#include <stdbool.h>

typedef int Item;
typedef struct queue_type *Queue;

static void terminate(const char* message);
Queue create();
void destroy(Queue q);
void push(Queue q, Item value);
Item pop(Queue q);
Item get_first_item(Queue q);
Item get_last_item(Queue q);
bool is_empty(Queue q);

#endif
