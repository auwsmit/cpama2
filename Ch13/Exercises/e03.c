/* Suppose that we call scanf as follows:
 *
 * scanf("%d%s%d", &i, s, &j);
 *
 * If the user enter 12abc32 56def78, what will be the values of i, s, and
 * j after the call? (Assume that i and j are int variables and s is an array of
 * characters.)
 */
#include <stdio.h>

int main(void)
{
    int i, j;
    char s[50];
    scanf("%d%s%d", &i, s, &j);

    printf("\ni: %d\ns: %s\nj: %d\n\n", i, s, j);

    return 0;
}

/* Answer:
 * i will be 12
 * s will be abc32
 * j will be 56
 */
