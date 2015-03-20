/* Write a function gcd(m, n) that calculates the greatest common divisor of the
 * integers m and n. (Programming Project 2 in Chapter 6 descripes Euclid's
 * algorithm for computing the GCD.)
 */
#include <stdio.h>

int gcd(int m, int n)
{
    int remainder;

    do
    {
        remainder = m % n;
        m = n;
        n = remainder;
    } while (n != 0);

    return m;
}

int main(void)
{
    int m, n;

    printf("\nEnter two integers: ");
    scanf("%d %d", &m, &n);

    printf("Greatest common divisor: %d\n\n", gcd(m, n));

    return 0;
}
