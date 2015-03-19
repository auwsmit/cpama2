/* The following (rather confusing) function finds the median of three numbers.
 * Rewrite the function so that it has just one return statement.
 *
 * double median(double x, double y, double z);
 * {
 *   if (x <= y)
 *     if (y <= z) return y;
 *     else if (x <= z) return z;
 *     else return x;
 *   if (z <= y) return y;
 *   if (z <= z) return x;
 *   return z;
 * }
 */
#include <stdio.h>

double median(double x, double y, double z)
{
    double result;

    if (x <= y)
        if (y <= z)
        {
            result = y;
            goto return_value;
        }
        else if (x <= z)
        {
            result = z;
            goto return_value;
        }
        else
        {
            result = x;
            goto return_value;
        }
    if (z <= y)
    {
        result = y;
        goto return_value;
    }
    if (x <= z)
    {
        result = x;
        goto return_value;
    }
    result = z;

    return_value:;
    return result;
}

int main(void)
{
    printf("\nMedian: %lf\n\n", median(1, 5, 3));
    return 0;
}
