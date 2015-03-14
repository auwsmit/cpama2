/* Write a program that computes the volume of a sphere with a 10-meter radius,
 * using the formula v = 4/3(pi)r^3.
 *
 * Write the fraction 4/3 as 4.0f/3.0f. (Try writing it as 4/3. What happens?)
 * Hint: C doesn't have an exponentiation operator, so you'll need to
 * multiply r by itself twice to compute (r to the power of 3).
 */
#include <stdio.h>

#define RAD 10
#define NUM_PIE 3.141592653f

int main(void)
{
    printf("\nThe volume of a %d-meter sphere is: %.2f\n\n",
            RAD, (4.0f/3.0f) * NUM_PIE * (RAD * RAD * RAD));

    return 0;
}

/* Additional Answer:
 * When (4.0f/3.0f) is (4/3), the answer is evaluated as an int 1
 * instead of a float 1.3333.. Making the answer much less accurate.
 */
