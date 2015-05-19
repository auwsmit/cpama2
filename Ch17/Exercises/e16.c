/* Write the following function. The call sum(g, i, j) should return
 * g(i) + ...  + g(j).
 *
 * int sum(int (*f)(int), int start, int end);
 */
int sum(int (*f)(int), int start, int end)
{
    int sum = 0;
    for (; start <= end; ++start)
        sum += f(start);
    return sum;
}
