/* What output does the following program fragment produce?
 *
 * i = 9384;
 * do {
 *     printf("%d ", i);
 *     i /= 10;
 * } while (i > 0);
 */
#include <stdio.h>

int main(void)
{
    int i;

    i = 9384;
    do
    {
        printf("%d ", i);
        i /= 10;
    } while (i > 0);

    return 0;
}

/* Answer:
 * 9384 938 93 9
 */
