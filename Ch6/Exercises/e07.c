/* Translate the program fragment of Exercise 2 into a single for statement */

#include <stdio.h>

int main(void)
{
    int i;

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

    return 0;
}

/* Answer:
 * for (i = 9384; i > 0; i /= 10) printf("%d ", i);
 */
