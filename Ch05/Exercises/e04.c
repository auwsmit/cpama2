/* Write a single expression whose value is either -1, 0, or +1,
 * depending on whether i is less than, equal to, or greater than j,
 * respectively.
 */
#include <stdio.h>

int main(void)
{
    int i, j;

    printf("\nValues for i and j (e.g. 22 6): ");
    scanf("%d %d", &i, &j);

    printf("Expression: %d\n\n", !(i == j) * (i < j ? -1 : 1));

    return 0;
}

/* Answer:
 * !(i == j) * (i < j ? -1 : 1)
 */
