#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

#define QUEUE_SIZE 8

typedef int Item;

static Item queue[QUEUE_SIZE];
static int first_in = 0;     /* position of first empty slot in queue */
static int first_out = 0;    /* position of slot to be removed */
static int num_items = 0;

static void terminate(const char* message)
{
    printf("%s", message);
    exit(EXIT_FAILURE);
}

void que_insert(Item i)
{
    if (num_items < QUEUE_SIZE)
    {
        queue[first_in] = i;
        first_in = ((first_in+1 == QUEUE_SIZE) ? 0 : first_in+1);
        num_items++;
    }
    else terminate("Queue overflow\n\n");
}

Item que_remove()
{
    if (que_is_empty())
        terminate("Queue underflow\n\n");
    else
    {
        Item to_return = queue[first_out];
        first_out = ((first_out+1 == QUEUE_SIZE) ? 0 : first_out+1);
        num_items--;
        return to_return;
    }
}

Item que_get_top_item()
{
    if (que_is_empty())
        terminate("Error, no items to get\n\n");
    if (first_in == 0)
        return queue[QUEUE_SIZE-1];
    else
        return queue[first_in-1];
}

Item que_get_bottom_item()
{
    if (que_is_empty())
        terminate("Error, no items to get\n\n");
    return queue[first_out];
}

bool que_is_empty()
{
    return num_items == 0;
}
