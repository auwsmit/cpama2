/* Write a function that computes the value of the following polynomial:
 *
 * 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
 *
 * Write a program that asks the user to enter a value for x, calls the function
 * to compute the polynomial, and then displays the value returned by the
 * function.
 */
#include <stdio.h>

int power(int x, int y);
int compute_poly(int x);

int main(void)
{
    int num;

    printf("\nThis program calculates the polynomial ");
    printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6");
    printf("\nEnter a number x: ");
    scanf("%d", &num);
    printf("Answer: %d\n\n", compute_poly(num));

    return 0;
}

int power(int x, int n)
{
    if (n < 1)
        return 1;
    else
        return x * power(x, n - 1);
}

int compute_poly(int x)
{
    int result;
    result  = 3 * power(x, 5);
    result += 2 * power(x, 4);
    result -= 5 * power(x, 3);
    result -= power(x, 2);
    result += 7 * x - 6;
    return result;
}
