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
    int i, j;
    char input, msg[BUF] = {0};
    printf("\nEnter a message: ");

    i = 0;
    while ((input = tolower(getchar())) != '\n')
        if (isalpha(input)) msg[i++] = input;

    for (j = i-1, i = 0; i < BUF; i++)
    {
        if (msg[i] == 0) break;
        if (msg[i] != msg[j])
        {
            printf("Not a palindrome\n\n");
            return 0;
        }
        j--;
    }
    printf("Palindrome\n\n");

    return 0;
}
