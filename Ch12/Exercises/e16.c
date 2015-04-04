/* Write a loop that prints the highest temperature in the temperature array
 * (see Exercise 14) for each day of the week. The loop body should call the
 * find_largest function, passing it one row of the array at a time.
 */
#include <stdio.h>
#include <stdbool.h> /* C99 only */
#include <stdlib.h>
#include <time.h>

int find_largest(int a[], int n);

int main(void)
{
    int temperatures[7][24];
    int *p, i,  max;

    srand((unsigned) time(NULL));

    /* random temperatures for each week */
    for (p = &temperatures[0][0];
         p < &temperatures[0][0] + 7 * 24;
         p++)
        *p = rand() % 99;

    putchar('\n');
    for (i = 0; i < 7; i++)
    printf("Largest value for week %d: %d\n", i + 1,
           find_largest(&temperatures[i][0], 24));
    putchar('\n');

    return 0;
}

int find_largest(int a[], int n)
{
    int *p, max;

    max = *a;
    for (p = a + 1; p < a + n; p++)
        if (*p > max)
            max = *p;
    return max;
}
