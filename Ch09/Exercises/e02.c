/* Write a function check(x, y, n) that returns 1 if both x and y fall between
 * 0 and n - 1, inclusive. The function should return 0 otherwise. Assume that
 * x, y, and n are all of type int.
 */
#include <stdio.h>

int check(int x, int y, int n)
{
    if ((x >= 0 && x < n) && (y >= 0 && y < n))
        return 1;
    return 0;
}

int main(void)
{
    int x, y, n;

    printf("\nEnter x, y, and n: ");
    scanf("%d%d%d", &x, &y, &n);

    if (check(x, y, n))
        printf("%d and %d are between 0 and %d\n\n", x, y, n);
    else
        printf("%d and %d are not between 0 and %d\n\n", x, y, n);

    return 0;
}
