#ifndef QUEUE_H

#define QUEUE_H
#include <stdio.h>
#include <bool.h>

typedef int Item;
typedef struct queue_type *Queue;

void insert(Queue q, Item value);
void remove(Queue q);
Item get_first_item(Queue q);
Item get_last_item(Queue q);
bool is_empty(Queue q);

#endif
