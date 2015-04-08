/* Simplify Programming Project 1(b) by taking advantage of the fact that an
 * array name can be used as a pointer.
 */
#include <stdio.h>

#define BUF 100

int main(void)
{
    char *p, msg[BUF], input;

    printf("\nEnter a message: ");
    for (p = msg; p < msg + BUF; p++)
    {
        if ((input = getchar()) == '\n') break;
        *p = input;
    }

    /* print the message in reverse, starting from the last character */
    printf("Reversal is: ");
    for (p = p-1; p >= msg; p--)
        putchar(*p);
    printf("\n\n");

    return 0;
}
