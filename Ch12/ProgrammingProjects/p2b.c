/* (a) Write a program that reads a message, then checks whether it's
 * a palindrome (the letterss in the message are the same from right to left):
 *
 * Enter a message: He lived as a devil, eh?
 * Palindrome
 *
 * Enter a message: Madam, I am Adam.
 * Not a palindrome
 *
 * Ignore all characters that aren't letters. Use integer variables to keep
 * track of positions in the array.
 *
 * (b) Revise the program to use pointers instead of integers to keep track of
 * positions in the array.
 */
#include <stdio.h>
#include <ctype.h>

#define BUF 50

int main(void)
{
    char *pa, *pb;
    char input, msg[BUF] = {0};
    printf("\nEnter a message: ");

    pa = &msg[0];
    while ((input = tolower(getchar())) != '\n')
        if (isalpha(input))
            *pa++ = input;

    pb = pa-1;
    pa = &msg[0];
    while (pa < &msg[0] + BUF)
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
