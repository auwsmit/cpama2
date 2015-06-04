#ifndef QUEUE_H

#define QUEUE_H
#include <stdio.h>
#include <bool.h>

typedef int Item;

void insert(Item value);
void remove();
Item get_first_item();
Item get_last_item();
bool is_empty();

#endif
