/* Write a function num_digits(n) that returns the number of digits in n
 * (a positive integer). Hint: To determine the number of digits in a number n,
 * divide it by 10 repeatedly. When n reaches 0, the number of divisions
 * indicates how many digits n originally had.
 */
#include <stdio.h>

int num_digits(int n)
{
    int digits;
    for (digits = 0; n != 0; digits++)
        n /= 10;
    return digits;
}

int main(void)
{
    int num;

    printf("\nEnter a number: ");
    scanf("%d", &num);
    printf("Digits in %d: %d\n\n", num, num_digits(num));

    return 0;
}
