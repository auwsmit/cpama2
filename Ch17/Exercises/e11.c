/* Write the following function:
 *
 * int count occurences(struct node *list, int n);
 *
 * The list parameter points to a linked list; the function should return
 * the number of times that n appears in this list. Assume that the node
 * structure is the one defined in Section 17.5.
 */
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

int count_occurences(struct node *list, int n)
{
    int times_seen = 0;

    for (; list != NULL; list = list->next)
        if (list->value == n)
            times_seen++;

    return times_seen;
}
