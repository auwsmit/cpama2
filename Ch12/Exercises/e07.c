/* Write the following function:
 *
 * bool search(const int a[], int n, int key);
 *
 * a is an array to be searched, n is the number of elements in the array, and
 * key is the search key. search should return true if key matches some element
 * of a, and false if it doesn't. Use pointer arithmetic--not subscripting--to
 * visit array elements.
 */
#include <stdbool.h> /* C99 only */

bool search(const int a[], int n, int key)
{
    int *p;

    for (p = a; p < a + n; p++)
        if (*p == key)
            return true;

    return false;
}
