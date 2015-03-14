/* What output does the following for statement produce?
 * for (i = 10; i >= 1; i /= 2)
 *   printf("%d ", i++);
 */
#include <stdio.h>

int main(void)
{
    int i;

    for (i = 10; i >= 1; i /= 2)
        printf("%d ", i++);

    return 0;
}

/* Answer:
 * 10 5 2 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 ... etc. endless 1s
 */
