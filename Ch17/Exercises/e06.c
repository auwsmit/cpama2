/* Modify the delete_from_list function so that it uses only one pointer
 * variable instead of two (cur and prev).
 */
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

struct node *delete_from_list(struct node *list, int n)
{
    struct node *cur, *prev;

    for (cur = list, prev = NULL;
         cur != NULL && cur->value != n;
         prev = cur, cur = cur->next)
        ;

    if (cur == NULL)
        return list;
    if (prev == NULL)
        list = list->next;
    free(cur);
    return list;
}

/* Answer: */
void *delete_from_list2(struct node **list, int n)
{
    struct node *entry = *list;

    while (entry)
    {
        if (entry->value == n)
        {
            *list = entry->next;
            free(entry);
            break;
        }
        list = &entry->next;
        entry = entry->next;
    }
}
