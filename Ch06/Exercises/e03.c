/* What output does the following for statement produce?
 *
 * for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i - j)
 *     printf("%d ", i);
 */
#include <stdio.h>

int main(void)
{
    int i, j;

    printf("\n");

    for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i - j)
        printf("%d ", i);

    printf("\n\n");

    return 0;
}

/* Answer:
 * 5
 */
