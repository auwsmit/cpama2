/* Write the following function:
 *
 * struct node *find_last(struct node *list, int n);
 *
 * The list parameter points to a linked list. The function should return
 * a pointer to the last node that contains n; it should return NULL if
 * n doesn't appear in the list. Assume that the node structure is the one
 * defined in 17.5.
 */
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

struct node *find_last(struct node *list, int n)
{
    struct node *found = NULL;

    for (; list != NULL; list = list->next)
        if (list->value == n)
            found = list;

    return found;
}
