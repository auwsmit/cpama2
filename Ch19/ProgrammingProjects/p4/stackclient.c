#include <stdio.h>
#include "stackADT.h"

int main(void)
{
    Stack s1, s2;
    int n;

    s1 = create();
    s2 = create();

    n = 1;
    push(s1, &n);
    n = 2;
    push(s1, &n);

    n = *(int *)pop(s1);
    printf("Popped %d from s1\n", n);
    push(s2, &n);
    n = *(int *)pop(s1);
    printf("Popped %d from s1\n", n);
    push(s2, &n);
    destroy(s1);

    while (!is_empty(s2))
        printf("Popped %d from s2\n", *(int *)pop(s2));

    n = 3;
    push(s2, &n);
    make_empty(s2);
    if (is_empty(s2))
        printf("s2 is empty\n");
    else
        printf("s2 is not empty\n");

    destroy(s2);

    return 0;
}
