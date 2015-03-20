/* Translate the program fragment of Exercise 2 into a single for statement */

#include <stdio.h>

int main(void)
{
    int i;

    printf("\n");

    /* original while loop */
    i = 9384;
    do
    {
        printf("%d ", i);
        i /= 10;
    } while (i > 0);

    printf("\n\n");

    /* new for loop */
    for (i = 9384; i > 0; i /= 10) printf("%d ", i);

    printf("\n\n");

    return 0;
}

/* Answer:
 * for (i = 9384; i > 0; i /= 10) printf("%d ", i);
 */
