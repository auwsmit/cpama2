/* Rewrite the program in Programming Project 2 so that it prints the reversal
 * of a three-digit number without using arithmetic to split the number into
 * digits. Hint: see upc.c program of Section 4.1
 */
#include <stdio.h>

int main(void)
{
    int digit1, digit2, digit3;

    printf("\nEnter a three-digit number: ");
    scanf("%1d%1d%1d", &digit1, &digit2, &digit3);

    printf("The reversal is: %d%d%d\n", digit3, digit2, digit1);

    return 0;
}
