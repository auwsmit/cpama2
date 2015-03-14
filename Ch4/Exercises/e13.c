/* Only one of the expressions ++i and i++ is exactly the same as (i += 1);
 * which is it? Justify your answer.
 */
#include <stdio.h>

int main(void)
{
    int i = 1;
    printf("\nduring ++i: %d\n", ++i);
    printf("after ++i: %d\n\n", i);

    i = 1;
    printf("during (i += 1): %d\n", (i += 1));
    printf("after (i += 1): %d\n\n", i);

    i = 1;
    printf("during i++: %d\n", i++);
    printf("after i++: %d\n\n", i);

    return 0;
}
/* Answer:
 * ++i is exactly the same as (i += 1) because they both immediately modify i
 * and evaluate as the modified value.
 *
 * But i++ is different because it evaluates as i before it's modified
 * and then modifies i afterward.
 */
