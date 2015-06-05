#ifndef QUEUE_H
#define QUEUE_H

#include <stdio.h>
#include <stdbool.h>

typedef int Item;

/* Sends an error message and terminates the program */
static void terminate(const char* message);

/* Inserts i to the top of the queue */
void que_insert(Item i);

/* Removes item from the queue and returns it */
Item que_remove();

/* Returns the top item of the queue */
Item que_get_top_item();

/* Returns the bottom item of the queue */
Item que_get_bottom_item();

/* Returns whether or not the queue is empty */
bool que_is_empty();

#endif
