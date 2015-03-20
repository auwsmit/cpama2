/* Translate the program fragment of Exercise 1 into a single for statement */

#include <stdio.h>

int main(void)
{
    int i;

    printf("\n");

    /* original while loop */
    i = 1;
    while (i <= 128)
    {
        printf("%d ", i);
        i *= 2;
    }

    printf("\n\n");

    /* new for loop */
    for (i = 1; i <= 128; i *= 2) printf("%d ", i);

    printf("\n\n");

    return 0;
}

/* Answer:
 * for (i = 1; i <= 128; i *= 2) printf("%d ", i);
 */
