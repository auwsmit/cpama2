/* Which of the following are not legal constants in C? Classify each legal
 * constant as either integer or floating-point.
 */
#include <stdio.h>

int main(void)
{
    printf("\nA: %f\n", 010E2);
    printf("B: %f\n", 32.1E+5);
    /* printf("C: %d\n", 0790); */
    /* printf("D: %f\n", 100_000); */
    printf("E: %f\n\n", 3.978e-2);

    return 0;
}

/* Answer:
 * A: legal float
 * B: legal float
 * C: illegal, octal doesn't use 9
 * D: illegal, no underscores in constants
 * E: legal float
 */
