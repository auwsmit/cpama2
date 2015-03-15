/* Modify the repdigit.c program of Section 8.1 so that it prints a table
 * showing how many times each digit appears in the number:
 *
 * Enter a number: 41271092
 * Digit:        0  1  2  3  4  5  6  7  8  9
 * Occurrences:  1  2  2  0  1  0  0  1  0  1
 */
#include <stdio.h>

int main(void)
{
    int digit, i, times_seen[10] = {0};
    long n;

    printf("\nEnter a number: ");
    scanf("%ld", &n);

    while (n > 0)
    {
        digit = n % 10;
        times_seen[digit]++;
        n /= 10;
    }

    printf("Digit:        ");
    for (i = 0; i < 10; i++)
        printf("%d  ", i);

    printf("\nOccurrences:  ");
    for (i = 0; i < 10; i++)
        printf("%d  ", times_seen[i]);

    printf("\n\n");

    return 0;
}
