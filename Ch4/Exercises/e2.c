/* If i and j are positive integers, does (-i)/j
 * always have the same value as -(i/j)? Justify your answer.
 */
#include <stdio.h>

int main(void)
{
    int i = 12;
    int j = 5;

    printf("\ni is %d and j is %d\n", i, j);
    printf("(-i)/j = %d\n", (-i)/j);
    printf("-(i/j) = %d\n\n", -(i/j));

    return 0;
}

/* Answer:
 * When compiled in C89, the the first expression could be evaluated
 * differently and have two different answers, depending on implementation.
 * When compiled in C99, they should always have the same result no matter what.
 *
 * This happens because C89 will round either up or down when doing division
 * with any negative operands.
 */
