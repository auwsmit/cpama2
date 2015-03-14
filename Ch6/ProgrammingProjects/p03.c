/* Write a program that asks the user to enter a fraction, then reduceds the
 * fraction to lowest terms:
 *
 * Enter a fraction: 6/12
 * In lowest terms: 1/2
 *
 * Hint: To reduce a fraction to lowest terms, first compute the GCD of the
 * numerator and denominator. Then divide both the numerator and demoninator by
 * the GCD.
 */
#include <stdio.h>

int main(void)
{
    int m, n, remainder, m_reduced, n_reduced;

    printf("\nEnter a fraction: ");
    scanf("%d/%d", &m, &n);

    m_reduced = m;
    n_reduced = n;

    do
    {
        remainder = m % n;
        m = n;
        n = remainder;
    } while (n != 0);

    m_reduced /= m;
    n_reduced /= m;

    printf("In lowest terms: %d/%d\n\n", m_reduced, n_reduced);

    return 0;
}
