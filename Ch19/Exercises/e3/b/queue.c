#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

typedef int Item;

struct node {
    Item data;
    struct node *next;
};

static struct node *top = NULL;
static struct node *bottom = NULL;

static void terminate(const char* message)
{
    printf("%s", message);
    exit(EXIT_FAILURE);
}

void que_insert(Item i)
{
    struct node *new_node = malloc(sizeof(struct node));
    if (new_node == NULL)
        terminate("Queue overflow\n\n");

    if (que_is_empty())
        bottom = new_node;
    else
        top->next = new_node;
    new_node->data = i;
    top = new_node;
}

Item que_remove()
{
    struct node *old_bot;
    Item i;

    if (que_is_empty())
        terminate("Queue underflow\n\n");

    old_bot = bottom;
    i = bottom->data;
    bottom = bottom->next;
    free(old_bot);
    return i;
}

Item que_get_top_item()
{
    if (que_is_empty())
        terminate("Error, no items to get\n\n");
    return top->data;
}

Item que_get_bottom_item()
{
    if (que_is_empty())
        terminate("Error, no items to get\n\n");
    return bottom->data;
}

bool que_is_empty()
{
    return bottom == NULL;
}
