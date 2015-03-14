/* What does the following statement print if i has the value 17?
 * What does it print if i has the value -17?
 */
#include <stdio.h>

int main(void)
{
    int i = 17;
    printf("\n%d\n", i >= 0 ? i : -i);

    i = -17;
    printf("%d\n\n", i >= 0 ? i : -i);

    return 0;
}

/* Answer:
 * In both instances it prints 17.
 */
