/* Write the following function:
 *
 * void swap(int *p, int *q);
 *
 * When passed the addresses of two variables, swap should exchange the values
 * of the variables:
 *
 * swap(&i, &j); // exchanges the values of i and j
 */
void swap(int *p, int *q)
{
    int temp;
    temp = *p;
    *p   = *q;
    *q   = temp;
}
