/* Write a macro NELEMS(a) that computes the number of elements in
 * a one-dimensional array a. Hint: See the discussion of the sizeof operator in
 * Section 8.1.
 */
#include <stdio.h>

#define NELEMS(a) (sizeof(a) / sizeof(a[0]))

int main(void)
{
    int array[] = { 3, 4 };
    printf("\n%ld\n\n", NELEMS(array));
    return 0;
}
