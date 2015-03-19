/* Rewrite the fact function so that it's no longer recursive. */

int fact(int n)
{
    int factorial = n;

    if (n <= 1) return 1;
    for (--n; n > 1; n--)
        factorial *= n;

    return factorial;
}
