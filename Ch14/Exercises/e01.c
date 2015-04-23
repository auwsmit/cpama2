/* Write parameterized macros that compute the following values.
 * 
 * (a) The cube of x.
 * (b) The remainder when n is divided by 4.
 * (c) 1 if the product of x and y is less than 100, 0 otherwise.
 *
 * Do your macros always work? If not describe what arguments would make them
 * fail.
 */
#include <stdio.h>

#define A_CUBE(x) ((x)*(x))
#define B_REMAINDER(n) ((n)/4)
#define C_LESSTHAN(x, y) (((x)*(y)) ? 1 : 0)

int main(void)
{
    int Ex, Why, En;

    printf("\nEnter x, y, and n: ");
    scanf("%d %d %d", &Ex, &Why, &En);

    printf("\n%d cubed: %d", Ex, A_CUBE(Ex));
    printf("\nRemainder of %d/4: %d", En, B_REMAINDER(En));
    printf("\n%d * %d < 100?: %d\n\n", Ex, Why, C_LESSTHAN(Ex, Why));

    return 0;
}
