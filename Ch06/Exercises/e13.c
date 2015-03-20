/* Rewrite the following loop so that its body is empty. :
 * for (n = 0; m > 0; n++)
 *   m /= 2;
 */
#include <stdio.h>

int main(void)
{
    int n, m;

    printf("\n");

    m = 100;
    for (n = 0; m > 0; n++)
    {
        printf("%d ", m);
        m /= 2;
    }

    printf("\n");

    m = 100;
    for (n = 0; m > 0; m /= 2, n++)
        printf("%d ", m);

    printf("\n\n");

    return 0;
}

/* Answer:
 * for (n = 0; m > 0; m /= 2, n++)
 */
