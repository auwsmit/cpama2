/* Modify the program of Programming Project 5 so that the polynomial is
 * evaluated using the following formula:
 * ((((3x + 2)x - 5)x - 1)x + 7)x - 6
 */
#include <stdio.h>

int main(void)
{
    int x;

    printf("\nThe following polynomial will be calculated:\n");
    printf("(3x + 2)x - 5)x - 1)x + 7)x - 6)\n\n");

    printf("Enter a number x: ");
    scanf("%d", &x);
    printf("\n");

    x = (((((((((3 * x) + 2) * x) - 5) * x) - 1) * x) + 7) * x) - 7;

    printf("Answer is: %d\n\n", x);

    return 0;
}
