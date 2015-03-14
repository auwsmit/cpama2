/* Show how to replace a continue statement by an equivalent goto statement. */

#include <stdio.h>

int main(void)
{
    int i;

    for (i = 0; i <= 10; i++)
        if (i == 8)
            continue;
        else
            printf("%d ", i);

    printf("\n");

    for (i = 0; i <= 10; i++)
    {
        if (i == 8)
            goto end_of_loop;
        else
            printf("%d ", i);

        end_of_loop:;
    }

    return 0;
}
