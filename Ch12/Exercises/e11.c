/* Modify the find_largest function of Section 12.3 so that it uses pointer
 * arithmetic--not subscripting--to visit array elements.
 */
int find_largest(int a[], int n)
{
    int *p, max;

    max = a[0];
    for (p = a + 1; p < a + n; p++)
        if (*p > max)
            max = *p;
    return max;
}
