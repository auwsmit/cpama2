/* Show the output produced by each of the following program fragments.
 * Assume that i, j, and k are int variables.
 * (a) i = 1;
 *     printf("%d ", i++ - 1);
 *     printf("%d", i);
 * (b) i = 10; j = 5;
 *     printf("%d ", i++ - ++j);
 *     printf("%d %d", i, j);
 * (c) i = 7; j = 8;
 *     printf("%d ", i++ - --j);
 *     printf("%d %d", i, j);
 * (d) i = 3; j = 4; k = 5;
 *     printf("%d ", i++ - j++ + --k);
 *     printf("%d %d %d", i, j, k);
 */
#include <stdio.h>

int main(void)
{
    int i, j, k;

    i = 1;
    printf("\n%d ", i++ - 1);
    printf("%d\n", i);
    i = 10; j = 5;
    printf("%d ", i++ - ++j);
    printf("%d %d\n", i, j);
    i = 7; j = 8;
    printf("%d ", i++ - --j);
    printf("%d %d\n", i, j);
    i = 3; j = 4; k = 5;
    printf("%d ", i++ - j++ + --k);
    printf("%d %d %d\n\n", i, j, k);

    return 0;
}

/* Answer:
 * (a) 0 2
 * (b) 4 11 6
 * (c) 0 8 7
 * (d) 3 4 5 4
 */
