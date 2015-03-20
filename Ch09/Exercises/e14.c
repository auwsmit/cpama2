/* The following function is supposed to return true if any element of the array
 * a has the value 0 and false if all elements are nonzero. Sadly, it contains
 * an error and show how to fix it:
 *
 * bool has_zero(int a[], int n)
 * {
 *   int i;
 *
 *   for (i = 0; i < n; i++)
 *     if (a[i] == 0)
 *       return true;
 *     else
 *       return false;
 * }
 */
#include <stdio.h>

#define true 1
#define false 0
typedef int bool;

#define LEN ((int)(sizeof(values) / sizeof(values[0])))

bool has_zero(int a[], int n);

int main(void)
{
    int values[] = { 23, 24, 26, 74, 43, 0, 34, 95, 4, 100 };

    if (has_zero(values, LEN))
        printf("\nArray has a zero.\n\n");
    else
        printf("\nArray has no zeros.\n\n");

    return 0;
}

bool has_zero(int a[], int n)
{
  int i;

  for (i = 0; i < n; i++)
    if (a[i] == 0)
      return true;

  return false;
}

/* Answer:
 * The error is that the function would return false as soon as the first
 * non-zero value appeared. Instead, it should return false after the loop is
 * done checking every value for 0.
 */
