/* Write a function digit(n, k) that returns the kth digit (from the right) in
 * n (a positive integer). For example, digit(829, 1) returns 9, digit(829, 2)
 * returns 2, and digit(829, 3) returns 8. If k is greater than the number of
 * digits in n, have the function return 0.
 */
#include <stdio.h>

int digit(int n, int k);
int num_digits(int n);

int main(void)
{
    int n, k, result;

    printf("\nCalculates the kth digit of an integer n.");
    printf("\nEnter two integers n and k (e.g. 829 1): ");
    scanf("%d%d", &n, &k);

    if ((result = digit(n, k)) == 0)
        printf("%d is too high for %d\n\n", k, n);
    else
        printf("%d\n\n", result);

    return 0;
}

int digit(int n, int k)
{
    int num_of_digits = num_digits(n);
    if (k > num_of_digits) return 0;

    for (; k != 1; k--)
        n /= 10;

    return n % 10;
}

/* Returns the number of digits that n has */
int num_digits(int n)
{
    int digits;
    for (digits = 0; n != 0; digits++)
        n /= 10;
    return digits;
}
