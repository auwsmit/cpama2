/* Modify Programming Project 11 so that the program continues adding
 * terms until the current term becomes less than e, where e is a small
 * (floating-point) number entered by the user.
 */
#include <stdio.h>

int main(void)
{
    int i;
    float precision;
    float end_result, factorial, p;

    printf("\nEnter a number: ");
    scanf("%f", &precision);

    end_result = 1;

    printf("\ne = 1");
    for (i = 1;; i++)
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

        if ((1 / factorial) < precision)
            break;
    }

    printf(" = %.4f\n\n", end_result);

    return 0;
}
