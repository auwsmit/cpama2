/* The algorithm for computing the UPC check digit ends with the following steps:
 *
 * Subtract 1 from the total.
 * Compute the remainder when the adjusted total is divided by 10.
 * Subtract the remainder from 9.
 *
 * It's tempting to try to simplify the algorithm by using these steps instead:
 *
 * Compute the remainder when the total is divided by 10.
 * Subtract the remainder from 10.
 *
 * Why doesn't this technique work?
 */
#include <stdio.h>

int main(void)
{
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5,
        first_sum, second_sum, total;

    printf("\nEnter the first (single) digit: ");
    scanf("%1d", &d);
    printf("Enter the first group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
    printf("Enter the second group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);

    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = 3 * first_sum + second_sum;

    printf("Check digit: %d\n\n", 10 - (total % 10));

    return 0;
}

/* Answer:
 * I have a feeling I'm wrong, but as far as I can tell,
 * this technique _does_ work and this is a trick question.
 *
 * Please correct me if this isn't the case
 */
