/* Whick one of the following statements is not equivalent to the other two
 * (assuming that the loop bodies are the same?)
 * (a) for (i = 0; i < 10; i++) ...
 * (b) for (i = 0; i < 10; ++i) ...
 * (c) for (i = 0; i++ < 10; ) ...
 */
#include <stdio.h>

int main(void)
{
    int i;

    printf("\nA: ");
    for (i = 0; i < 10; i++)
        printf("\ni = %d", i);

    printf("\nB: ");
    for (i = 0; i < 10; ++i)
        printf("\ni = %d", i);

    printf("\nC: ");
    for (i = 0; i++ < 10; )
        printf("\ni = %d", i);

    printf("\n\n");

    return 0;
}

/* Answer: C */
