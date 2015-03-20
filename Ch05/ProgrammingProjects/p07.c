/* Write a program that finds the largest and smallest of four integers entered
 * by the user:
 *
 * Enter four integers: 21 43 10 35
 * Largest: 43
 * Smallest 10
 *
 * Use as few if statements as possible. Hint: Four if statements are sufficient.
 */
#include <stdio.h>

int main(void)
{
    int i1, i2, i3, i4, largest, smallest;

    printf("\nEnter four integers: ");
    scanf("%d %d %d %d", &i1, &i2, &i3, &i4);

    largest = smallest = i1;

    if (largest < i2)
        largest = i2;
    if (largest < i3)
        largest = i3;
    if (largest < i4)
        largest = i4;

    if (smallest > i2)
        smallest = i2;
    if (smallest > i3)
        smallest = i3;
    if (smallest > i4)
        smallest = i4;

    printf("Largest: %d\nSmallest: %d\n\n", largest, smallest);

    return 0;
}
