/* Write the following parameterized macros.
 *
 * (a) CHECK(x,y,n) - Has the value 1 if both x and y fall between 0 and n-1,
 *     inclusive.
 * (b) MEDIAN(x,y,z) - Finds the median of x, y, and z.
 * (c) CHECK(x) - Computes the polynomial 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6.
 */
#include <stdio.h>
#include <math.h>

#define CHECK_A(x,y,n) ((x) >= 0 && (x) <= (n)-1 &&     \
                        (y) >= 0 && (y) <= (n)-1 ? 1 : 0)

#define MEDIAN(x,y,z) ((x) > (y) && (x) < (z) ? (x) : \
                       (y) > (x) && (y) < (z) ? (y) : \
                       (z) > (x) && (z) < (y) ? (z) : \
                       (x) < (y) && (x) > (z) ? (x) : \
                       (y) < (x) && (y) > (z) ? (y) : \
                       (z) < (x) && (z) > (y) ? (z) : (x))

#define CHECK_C(x) (3 * pow((x),5)  \
                   + 2 * pow((x),4) \
                   - 5 * pow((x),3) \
                   - pow((x),2)     \
                   + 7 * (x) - 6)

int main(void)
{
    int x, y, z;

    printf("\nEnter x, y, and n/z: ");
    scanf("%d %d %d", &x, &y, &z);

    printf("\n%d and %d fall between 0 and %d-1: %s", x, y, z,
           CHECK_A(x, y, z) ? "true" : "false");
    printf("\nMedian of %d, %d, %d: %d", x, y, z, MEDIAN(x, y, z));
    printf("\nPolynomial answer for %d: %.0f\n\n", x, CHECK_C(x));

    return 0;
}
