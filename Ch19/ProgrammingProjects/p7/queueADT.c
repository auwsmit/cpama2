#include <stdio.h>
#include <stdlib.h>
#include "queueADT.h"

typedef int Item;

struct node {
    Item data;
    struct node *next;
};

typedef struct queue_type {
    struct node *first;
    struct node *last;
} *Queue;


static void terminate(const char* message)
{
    printf("%s", message);
    exit(EXIT_FAILURE);
}

Queue create(void)
{
    Queue q = malloc(sizeof(struct queue_type));
    if (q == NULL)
        terminate("Error in create: queue could not be created.");
    q->first = 0;
    q->last = 0;
    return q;
}

void destroy(Queue q)
{
    while (!is_empty)
        pop(q);
    free(q);
}

void push(Queue q, Item i)
{
    struct node *new_node = malloc(sizeof(struct node));
    if (new_node == NULL)
        terminate("Queue overflow\n\n");

    if (is_empty(q))
        q->last = new_node;
    else
        q->first->next = new_node;
    new_node->data = i;
    q->first = new_node;
}

Item pop(Queue q)
{
    struct node *old_bot;
    Item i;

    if (is_empty(q))
        terminate("Queue underflow\n\n");

    old_bot = q->last;
    i = q->last->data;
    q->last = q->last->next;
    free(old_bot);
    return i;
}

Item get_first_item(Queue q)
{
    if (is_empty(q))
        terminate("Error, no items to get\n\n");
    return q->first->data;
}

Item get_last_item(Queue q)
{
    if (is_empty(q))
        terminate("Error, no items to get\n\n");
    return q->last->data;
}

bool is_empty(Queue q)
{
    return q->last == NULL;
}
