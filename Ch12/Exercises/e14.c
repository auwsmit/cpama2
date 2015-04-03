/* Assume that the following array contains a week's worth of hourly temperature
 * readings, with each row containing the readings for one day:
 * 
 * int temperatures[7][24];
 * 
 * Write a statement that uses the search function (see Exercise 7) to search the
 * entire temperatures array for the value 32.
 */
#include <stdio.h>
#include <stdbool.h> /* C99 only */

bool search(const int a[], int n, int key);

int main(void)
{
    int temperatures[7][24] = {{ 12, 34, 21, 31, 25, 36, 78, 43, 21, 56,
                                 12, 34, 21, 31, 25, 36, 78, 43, 21, 56,
                                 13, 52, 1, 3 },
                               { 12, 34, 21, 31, 25, 36, 78, 43, 21, 56,
                                 12, 34, 21, 31, 25, 36, 78, 43, 21, 56,
                                 13, 52, 1, 3 },
                               { 12, 34, 21, 31, 25, 36, 78, 43, 21, 56,
                                 12, 34, 21, 31, 25, 36, 78, 43, 21, 56,
                                 13, 52, 1, 3 },
                               { 12, 34, 21, 31, 25, 36, 78, 43, 21, 56,
                                 12, 34, 21, 31, 32, 36, 78, 43, 21, 56,
                                 13, 52, 1, 3 },
                               { 12, 34, 21, 31, 25, 36, 78, 43, 21, 56,
                                 12, 34, 21, 31, 25, 36, 78, 43, 21, 56,
                                 13, 52, 1, 3 },
                               { 12, 34, 21, 31, 25, 36, 78, 43, 21, 56,
                                 12, 34, 21, 31, 25, 36, 78, 43, 21, 56,
                                 13, 52, 1, 3 },
                               { 12, 34, 21, 31, 25, 36, 78, 43, 21, 56,
                                 12, 34, 21, 31, 25, 36, 78, 43, 21, 56,
                                 13, 52, 1, 3 }};

    if (search(&temperatures[0][0], 7*24, 32))
        printf("\nArray contains 32.\n\n");
    else
        printf("\nArray doesn't have 32.\n\n");

    return 0;
}

bool search(const int a[], int n, int key)
{
    int *p;

    for (p = a; p < a + n; p++)
        if (*p == key)
            return true;

    return false;
}

/* Answer:
 * search(&temperatures[0][0], 7*24, 32)
 */
