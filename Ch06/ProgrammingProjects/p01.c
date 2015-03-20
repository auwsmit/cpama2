/* Write a program that finds the largest in a series of numbers entered by the
 * user. The program must prompt the user to enter numbers one by one. When the
 * user enters 0 or a negative number, the program must display the largest
 * nonnegative number entered:
 *
 * Enter a number: 60
 * Enter a number: 38.3
 * Enter a number: 4.89
 * Enter a number: 100.62
 * Enter a number: 75.2295
 * Enter a number: 0
 *
 * The largest number entered was 100.62
 */
#include <stdio.h>

int main(void)
{
    float i, n, largest;

    i = 1;
    do
    {
        printf("\nEnter a number: ");
        scanf("%f", &n);

        if (n == 1 || n > largest) largest = n;

        i++;
    } while (i <= 6);

    printf("\nThe largest number entered was %.2f\n\n", largest);

    return 0;
}
