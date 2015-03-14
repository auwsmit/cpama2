/* Is the following if statement legal?
 * if (n >= 1 <= 10)
 *   printf("n is between 1 and 10\n");
 * If so, what does it do when n is equal to 0?
 */
#include <stdio.h>

int main(void)
{
    int n = 0;

    if (n >= 1 <= 10)
        printf("\nn is between 1 and 10\n\n");

    return 0;
}

/* Answer:
 * It is a legal statement.
 *
 * Here's what happens when n equals 0:
 *
 * First, in the if's expression, (n >= 1) is evaluated to 0.
 * Then, (0 <= 10) is then evaluated as 1, meaning the final value is 1.
 * Since the value isn't 0, it runs the printf statement.
 */
