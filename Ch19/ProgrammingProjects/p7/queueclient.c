#include <stdio.h>
#include "queueADT.h"

int main(void)
{
    Item n;

    Queue q1 = create();
    Queue q2 = create();

    push(q1, 2);
    push(q1, 4);
    push(q1, 6);
    printf("pushed 2, 4, and 6 onto q1\n");
    push(q2, 1);
    push(q2, 3);
    push(q2, 5);
    printf("pushed 1, 3, and 5 onto q2\n");

    printf("top of q1 is %d\n", get_first_item(q1));

    printf("popped %d from q1\n", pop(q1));
    printf("popped %d from q2\n", pop(q2));

    n = pop(q1);
    printf("popped %d from q1 and pushed to q2\n", n);
    push(q2, n);

    printf("popped %d from q2\n", pop(q2));
    printf("top of q2 is %d\n", get_first_item(q2));
    printf("bottom of q2 is %d\n", get_last_item(q2));
    printf("popped %d from q2\n", pop(q2));
    printf("popped %d from q2\n", pop(q2));
    printf("popped %d from q1\n", pop(q1));

    destroy(q1);
    destroy(q2);

    return 0;
}
