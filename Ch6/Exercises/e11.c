/* What output does the following program fragment produce?
 *
 * sum = 0;
 * for (i = 0; i < 10; i++) {
 *   if (i % 2)
 *     continue;
 *   sum += 1;
 * }
 * printf("%d\n", sum);
 */
#include <stdio.h>

int main(void)
{
    int sum, i;

    sum = 0;
    for (i = 0; i < 10; i++)
    {
        if (i % 2)
            continue;
        sum += 1;
    }
    printf("\n%d\n\n", sum);

    return 0;
}

/* Answer:
 * 5
 */
