/* Write a program that asks the user to enter a series of integers (which it
 * stores in an array), then sorts the integers by calling the function
 * selection_sort. When given an array with n elements, selection_sort must do
 * the following:
 *
 * 1. Search the array to find the largest element, then move it to the last
 * position of the array.
 * 2. Call itself recursively to sort the first n - 1 elements of the array.
 */
#include <stdio.h>

/* the amount of array items to sort */
#define NUMS 8

void selection_sort(int a[], int n);

int main(void)
{
    int i, array[NUMS];

    printf("\nEnter %d numbers: ", NUMS);
    for (i = 0; i < NUMS; i++)
        scanf("%d", &array[i]);

    selection_sort(array, NUMS);

    printf("Sorted: ");
    for (i = 0; i < NUMS; i++)
        printf("%d ", array[i]);
    printf("\n\n");

    return 0;
}

void selection_sort(int a[], int n)
{
    if (n == 0) return;

    int i, li = 0;

    for (i = 1; i < n; i++)
        if (a[i] > a[li])
            li = i;

    i = a[n-1];
    a[n-1] = a[li];
    a[li] = i;
    oc
    selection_sort(a, n - 1);
}
