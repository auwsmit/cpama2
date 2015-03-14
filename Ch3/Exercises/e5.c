/* Suppose we call scanf as follows: scanf("%f%d%f", &x, &i, &y);
 *
 * If the user enters 12.3 45.6 789
 *
 * what will be the values of x, i, and y after the call?  (Assume that x and
 * y are float variables and i is a int variable)
 */
#include <stdio.h>

int main(void)
{
    float x, y;
    int i;

    scanf("%f%d%f", &x, &i, &y);
    printf("\nx: %f, i: %d, y: %f\n\n", x, i, y);

    return 0;
}

/* Answer:
 * x: 12.300000
 * i: 45
 * y: 0.600000
 */
