/* (C99) Repeat Exercise 3, but this time use a designated initializer.  Make
 * the initializer as short as possible.
 */
#include <stdbool.h> /* C99 only */
#include <stdio.h>

int main(void)
{
    bool weekend[] = { [0] = true, [6] = true };
    int i;

    for (i = 0; i < 7; i++)
        printf("\nDay %d: Weekend %d", i + 1, weekend[i]);
    printf("\n\n");

    return 0;
}
