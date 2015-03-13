/* Write a program that computes the factorial of a positive number:
 *
 * Enter a positive integer: 6
 * Factorial of 6: 720
 *
 * (a) Use a short variable to store the value of the factorial. What is
 * the largest value of n for which the program correctly prints the
 * factorial of n?
 * (b) Repeat part (a), using an int variable instead.
 * (c) Repeat part (a), using an long variable instead.
 * (d) Repeat part (a), using an long long variable instead.
 * (e) Repeat part (a), using an float variable instead.
 * (f) Repeat part (a), using an double variable instead.
 * (g) Repeat part (a), using an long double variable instead.
 *
 * In cases (e)-(g), the program will display a close approximation of the
 * factorial, not necessarily the exact value.
 */
#include <stdio.h>

int main(void)
{
    float input, i, factorial = 1;

    printf("\nEnter a positive integer: ");
    scanf("%f", &input);

    for (i = 1; i <= input; i++)
        factorial *= i;

    printf("Factorial of %.0f: %.0f\n\n", input, factorial);

    return 0;
}

/* Answer:
 * (a) short - 7
 * (b) int - 12
 * (c) long - 20
 * (d) long long - 20
 * (e) float - 34
 * (f) double - 170
 * (g) long double - 1754
 */
