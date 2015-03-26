/* The following function supposedly computes the sum and average of the numbers
 * in the array a, which has length n. avg and sum point to variables that the
 * function should modify. Unfortunately, the function contains several errors;
 * find and correct them.
 *
 * void avg_sum(double a[], int n, double *avg, double *sum)
 * {
 *   int i;
 *
 *   sum = 0.0;
 *   for (i = 0; i < n; i++)
 *     sum += a[i];
 *   avg = sum / n;
 * }
 */
#include <stdio.h>

#define NUMS 5

void avg_sum(double a[], int n, double *avg, double *sum);

int main(void)
{
    int i;
    double A[NUMS], Avg, Sum;

    printf("\nEnter %d numbers: ", NUMS);
    for (i = 0; i < NUMS; i++)
        scanf(" %lf", &A[i]);

    avg_sum(A, NUMS, &Avg, &Sum);

    printf("Average: %.2lf\nSum %.2lf\n\n", Avg, Sum);

    return 0;
}

void avg_sum(double a[], int n, double *avg, double *sum)
{
    int i;

    *sum = 0.0;
    for (i = 0; i < n; i++)
        *sum += a[i];
    *avg = *sum / n;
}
