/* What output does the following program fragment produce?
 *
 * i = 1;
 * while (i <= 128) {
 *     printf("%d ", i);
 *     i *= 2;
 * }
 */
#include <stdio.h>

int main(void)
{
    int i;

    printf("\n");

    i = 1;
    while (i <= 128)
    {
        printf("%d ", i);
        i *= 2;
    }

    printf("\n\n");

    return 0;
}

/* Answer:
 * 1 2 4 8 16 32 64 128
 */
