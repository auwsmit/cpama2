/* The value of the mathematical constant e can be expressed as an
 * infinite series:
 *
 * e = 1 + 1/1! + 1/2! + 1/3! + ...
 * 
 * Write a program that approximates e by computing the value of
 * 1 + 1/1! + 1/2! + 1/3! + ... + 1/n!
 * where n is an integer entered by the user.
 */
#include <stdio.h>

int main(void)
{
    int precision, i;
    float end_result, factorial, p;

    printf("\nEnter a number: ");
    scanf("%d", &precision);

    end_result = 1;

    printf("\ne = 1");
    for (i = 1; i <= precision; i++)
    {
        /* calculating the factorial */
        factorial = p = i;
        while (p > 0)
        {
            if (p - 1 == 0) break;
            factorial *= --p;
        }

        end_result += (1 / factorial);
        printf(" + 1/%d!", i);
    }

    printf(" = %.4f\n\n", end_result);

    return 0;
}
