/* The following function is supposed to insert a new node into its proper place
 * in an ordered list, returning a pointer to the first node in the modified
 * list. Unfortunately, the function doesn't work correctly in all cases.
 * Explain what's wrong with it and show how to fix it. Assume that the node
 * structure is the one defined in Section 17.5.
 *
 * struct node *insert_into_ordered_list(struct node *list
 *                                       struct node *new_node)
 * {
 *   struct node *cur = list, *prev = NULL;
 *   while (cur->value <= new_node->value) {
 *     prev = cur;
 *     cur = cur->next;
 *   }
 *   prev->next = new_node;
 *   new_node->next = cur;
 *   return list;
 * }
 */
#include <stdio.h>

struct node {
    int value;
    struct node *next;
};

/* Answer:
 * The while loop doesn't check if cur is null. So in the instance that every
 * value in the node list is less than the new node's value, the while loop will
 * set `cur = cur->next;` (cur will be NULL) and then check `cur->value <=
 * new_node->value)` which will result in an error. The simple fix is to check
 * if cur isn't NULL in the while loop:
 */
struct node *insert_into_ordered_list(struct node *list,
                                      struct node *new_node)
{
  struct node *cur = list, *prev = NULL;
  while (cur != NULL && cur->value <= new_node->value) {
    prev = cur;
    cur = cur->next;
  }
  prev->next = new_node;
  new_node->next = cur;
  return list;
}

int main(void)
{
    struct node p6    = {20, NULL};
    struct node p5    = {18, &p6};
    struct node p4    = {15, &p5};
    struct node p3    = {10, &p4};
    struct node p2    = {8,  &p3};
    struct node p1    = {5,  &p2};
    struct node new_one = {50,  NULL};
    struct node *p, *begin = &p1;

    /* print node list */
    printf("\n");
    for (p = begin; p != NULL; p = p->next)
        printf("%d%s", p->value, p->next != NULL ? ", " : "");
    printf("\n");

    /* insert new item into list */
    begin = insert_into_ordered_list(begin, &new_one);

    /* print node list again */
    for (p = begin; p != NULL; p = p->next)
        printf("%d%s", p->value, p->next != NULL ? ", " : "");
    printf("\n\n");

    return 0;
}
