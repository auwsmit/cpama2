/* Condense the fact function in the same way we condensed power. */

/* Original */
int fact(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * fact(n - 1);
}

/* Answer: */
int fact(int n)
{
    return (n <= 1) ? 1 : n * fact(n - 1);
}
