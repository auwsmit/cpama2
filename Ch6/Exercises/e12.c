/* The following "prime-testing" loop appeared in Section 6.4:
 * for (d = 2; d < n; d++)
 *   if (n % d == 0)
 *     break;
 *
 * This loop isn't very efficient. It's not necessary to divide n by all
 * numbers between 2 and n - 1 to determine whether it's prime. In fact, we
 * need only check divisors up to the square root of n. Modify the loop to take
 * advantage of this fact. Hint: Don't try to compute the square root of n;
 * instead, compare d * d with n.
 */
#include <stdio.h>

int main(void)
{
    int d, n;

    printf("\nEnter a number: ");
    scanf("%d", &n);

    for (d = 2; d < n; d++)
    {
        if (n % (d * d) == 0)
        {
            printf("%d isn't prime", n);
            return 0;
        }
    }

    printf("%d is prime!\n\n", n);

    return 0;
}

/* Really unsure about this one. I know it's more efficient than before, but
 * still might be incomplete and/or incorrect.
 */
