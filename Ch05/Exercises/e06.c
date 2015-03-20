/* Is the following if statement legal?

 * if (n == 1-10)
 *   printf("n is between 1 and 10\n");

 * If so, what does it do when n is equal to 5?
 */
#include <stdio.h>

int main(void)
{
    int n = 5;

    if (n == 1-10)
        printf("\nn is between 1 and 10\n\n");

    return 0;
}

/* Answer:
 * It is a legal statement.
 *
 * Here's what happens when n equals 5:
 *
 * First, in the if's expression, 1-10 is evaluated to -9.
 * Then, (n == -9) is then evaluated as 0, meaning the final value is 0.
 * Since the value is 0, it skips the printf statement and exits.
 */
