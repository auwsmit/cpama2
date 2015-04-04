/* Rewrite the following function to use pointer arithmetic instead of array
 * subscripting. (In other words, eliminate variables i and k and all uses of
 * the [] operator.) Use a single loop instead of nested loops.
 *
 * int sum_two_dimensional_array(const int a[][LEN], int n)
 * {
 *   int i, j, sum = 0;
 *
 *   for (i = 0; i < n; i++)
 *     for (j = 0; j < LEN; j++)
 *       sum += a[i][j];
 *
 *   return sum;
 * }
 */
int sum_two_dimensional_array(const int a[][LEN], int n)
{
    int *p, sum = 0;

    for (p = &a[0][0]; p < &a[0][0] + n * LEN; p++)
        sum += *p;

    return sum;
}
