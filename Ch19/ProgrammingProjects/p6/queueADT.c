#include <stdio.h>
#include <stdlib.h>
#include "queueADT.h"

typedef struct queue_type {
    int first_in;     /* position of first empty slot in queue */
    int first_out;    /* position of slot to be removed */
    int num_items;
    int size;
    Item *queue;
} *Queue;

static void terminate(const char* message)
{
    printf("%s", message);
    exit(EXIT_FAILURE);
}

Queue create(int size)
{
    Queue new_q = malloc(sizeof(struct queue_type));
    if (new_q == NULL)
        terminate("Error in create: queue could not be created\n\n");
    new_q->queue = malloc(size * sizeof(Item));
    if (new_q->queue == NULL)
    {
        free(new_q);
        terminate("Error in create: queue could not be created\n\n");
    }

    new_q->first_in = 0;
    new_q->first_out = 0;
    new_q->num_items = 0;
    new_q->size = size;
    return new_q;
}

void destroy(Queue q)
{
    free(q);
}

void push(Queue q, Item i)
{
    if (q->num_items < q->size)
    {
        q->queue[q->first_in] = i;
        q->first_in = ((q->first_in+1 == q->size) ? 0 : q->first_in+1);
        q->num_items++;
    }
    else terminate("Queue overflow\n\n");
}

Item pop(Queue q)
{
    if (is_empty(q))
        terminate("Queue underflow\n\n");

    Item to_return = q->queue[q->first_out];
    q->first_out = ((q->first_out+1 == q->size) ? 0 : q->first_out+1);
    q->num_items--;
    return to_return;
}

Item get_first_item(Queue q)
{
    if (is_empty(q))
        terminate("Error, no items to get\n\n");
    if (q->first_in == 0)
        return q->queue[q->size-1];
    else
        return q->queue[q->first_in-1];
}

Item get_last_item(Queue q)
{
    if (is_empty(q))
        terminate("Error, no items to get\n\n");
    return q->queue[q->first_out];
}

bool is_empty(Queue q)
{
    return q->num_items == 0;
}
