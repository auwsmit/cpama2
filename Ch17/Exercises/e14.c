/* Modify the delete_from_list function (Section 17.5) so that its first
 * parameter has type struct node ** (a pointer to a pointer to the first node
 * in the list) and its return type is void, delete_from_list must modify its
 * first argument to point to the list after the desired node has been deleted.
 */
#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

/* Answer: */
void delete_from_list(struct node **list, int n)
{
  struct node *cur, *prev;

  for (cur = *list, prev = NULL;
       cur != NULL && cur->value != n;
       prev = cur, cur = cur->next)
      ;

  if (cur == NULL)
      ;                         /* n was not found */
  if (prev == NULL)
      *list = (*list)->next;    /* n is in the first node */
  else
      prev->next = cur->next;   /* n is in some other node */
  free(cur);
}

int main(void)
{
    struct node p6    = {20, NULL};
    struct node p5    = {18, &p6};
    struct node p4    = {15, &p5};
    struct node p3    = {10, &p4};
    struct node p2    = {8,  &p3};
    struct node p1    = {5,  &p2};
    struct node *p, *begin = &p1;

    /* print node list */
    printf("\n");
    for (p = begin; p != NULL; p = p->next)
        printf("%d%s", p->value, p->next != NULL ? ", " : "");
    printf("\n");

    /* delete item from list */
    delete_from_list(&begin, 10);

    /* print node list again */
    for (p = begin; p != NULL; p = p->next)
        printf("%d%s", p->value, p->next != NULL ? ", " : "");
    printf("\n\n");

    return 0;
}
