/* Modify Programming Project 3 from Chapter 6 so that it includes the following
 * function:
 *
 * void reduce(int numerator, int denominator,
 *             int *reduced_numerator,
 *             int *reduced_denominator);
 *
 * numerator and denominator are the numerator of a fraction.  reduced_numerator
 * and reduced_denominator are pointers to variables in which the function will
 * store the numerator and denominator of the fraction once it has been reduced
 * to lowest terms.
 */
#include <stdio.h>

void reduce(int numerator, int denominator,
            int *reduced_numerator,
            int *reduced_denominator);

int main(void)
{
    int m, n, m_reduced, n_reduced;

    printf("\nEnter a fraction: ");
    scanf("%d/%d", &m, &n);

    reduce(m, n, &m_reduced, &n_reduced);

    printf("In lowest terms: %d/%d\n\n", m_reduced, n_reduced);

    return 0;
}

void reduce(int numerator, int denominator,
            int *reduced_numerator,
            int *reduced_denominator)
{
    int remainder;

    *reduced_numerator = numerator;
    *reduced_denominator = denominator;

    do
    {
        remainder = numerator % denominator;
        numerator = denominator;
        denominator = remainder;
    } while (denominator != 0);

    *reduced_numerator = *reduced_numerator / numerator;
    *reduced_denominator = *reduced_denominator / numerator;
}
