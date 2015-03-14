/* Extend the program in Programming Project 1 to handle three-digit numbers. */

#include <stdio.h>

int main(void)
{
    int number, digit1, digit2, digit3;

    printf("\nEnter a three-digit number: ");
    scanf("%d", &number);

    digit1 = number / 100;
    digit2 = (number / 10) % 10;
    digit3 = number % 10;

    printf("The reversal is: %d%d%d\n\n", digit3, digit2, digit1);

    return 0;
}
