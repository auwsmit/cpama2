/* What output does the following for statement produce?
 * for (i = 10; i >= 1; i /= 2)
 *   printf("%d ", i++);
 */
#include <stdio.h>

int main(void)
{
    int i;

    printf("\n");

    for (i = 10; i >= 1; i /= 2)
        printf("%d ", i++);

    printf("\n\n");

    return 0;
}

/* Answer:
 * 10 5 2 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ... etc. endless 1s
 */
