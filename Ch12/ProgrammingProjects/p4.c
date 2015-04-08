/* Simplify Programming Project 2(b) by taking advantage of the fact that an
 * array name can be used as a pointer.
 */
#include <stdio.h>
#include <ctype.h>

#define BUF 50

int main(void)
{
    char *pa, *pb;
    char input, msg[BUF] = {0};

    printf("\nEnter a message: ");
    pa = msg;
    while ((input = tolower(getchar())) != '\n')
        if (isalpha(input))
            *pa++ = input;

    pb = pa-1;
    pa = msg;
    while (pa < msg + BUF)
    {
        if (*pa == 0) break;
        if (*pa != *pb)
        {
            printf("Not a palindrome\n\n");
            return 0;
        }
        pa++, pb--;
    }
    printf("Palindrome\n\n");

    return 0;
}
