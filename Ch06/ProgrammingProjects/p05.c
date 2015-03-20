/* Programming Project 1 in Chapter 4 asked you to write a program that
 * displays a two-digit number with its digits reversed. Generalize the program
 * so that the number can have one, two, three, or more digits. Hint: Use a do
 * loop that repeatedly divides the number by 10, stopping when it reaches 0.
 */
#include <stdio.h>

int main(void)
{
    int number;

    printf("\nEnter a number: ");
    scanf("%d", &number);

    printf("The reversal is: ");
    do
    {
        printf("%d", number % 10);
        number = number/10;
    } while (number != 0);

    printf("\n\n");

    return 0;
}
