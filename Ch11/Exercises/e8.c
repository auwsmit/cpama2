/* Write the following function:
 *
 * int *find_largest(int a[], int n);
 *
 * When passed an array of length n, the function will return a pointer to the
 * array's largest element.
 */
#include <stdio.h>

#define NUMS 5

int *find_largest(int a[], int n);

int main(void)
{
    int i;
    int A[NUMS], *Largest;

    printf("\nEnter %d numbers: ", NUMS);
    for (i = 0; i < NUMS; i++)
        scanf(" %d", &A[i]);

    Largest = find_largest(A, NUMS);

    printf("Largest: %d\n\n", *Largest);

    return 0;
}

int *find_largest(int a[], int n)
{
    int i, *largest;

    largest = &a[0];
    for (i = 1; i < n; i++)
        if (a[i] > *largest)
            largest = &a[i];

    return largest;
}
