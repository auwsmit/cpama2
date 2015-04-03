/* Write the following function:
 *
 * double inner_product(const double *a, const double *b,
 *                      int n);
 *
 * a and b both point to arrays of length n. The function should return a[0]
 * * b[0] + a[1] * b[1] + ... + a[n-1] * b[n-1]. Use pointer arithmetic--not
 * subscripting--to visit array elements.
 */
double inner_product(const double *a, const double *b, int n)
{
    double *pa, *pb, product;

    product = 0;
    for (pa = a, pb = b; pa < a + n - 1;)
        product = (*pa + *pb) * (*pa++ + *pb++);

    return product;
}
