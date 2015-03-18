/* Write functions that return the following values. (Assume that a and n are
 * parameters, where a is an array of int values and n is the length of the
 * array.)
 *
 * (a) The largest element in a.
 * (b) The average of all elements in a.
 * (c) The number of positive elements in a.
 */
#include <stdio.h>

#define LEN ((int)(sizeof(array) / sizeof(array[0])))

int largest_element(int a[], int n);
float average_elements(int a[], int n);
int num_positive_elements(int a[], int n);

int main(void)
{
    int i, array[] = { 10, 299, -5, 21, 5, 6, 2, 40, -21, -100, 63, -64 };

    printf("\nArray: ");
    for (i = 0; i < LEN; i++)
        printf("%d%c ", array[i], (i != LEN - 1) ? ',' : '\n');

    printf("\nLargest element: %d", largest_element(array, LEN));
    printf("\nAverage of elements: %.2f", average_elements(array, LEN));
    printf("\nNumber of positive elements: %d\n\n", num_positive_elements(array, LEN));

    return 0;
}

int largest_element(int a[], int n)
{
    int i, largest = a[0];

    for (i = 1; i < n; i++)
        if (a[i] > largest)
            largest = a[i];

    return largest;
}

float average_elements(int a[], int n)
{
    int i;
    float average = 0;

    for (i = 0; i < n; i++)
        average += a[i];

    return average / n;
}

int num_positive_elements(int a[], int n)
{
    int i, positives = 0;

    for (i = 0; i < n; i++)
        if (a[i] > -1)
            positives++;

    return positives;
}
