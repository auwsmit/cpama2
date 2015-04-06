/* (a) Write a program that reads a message, then prints the reversal of the
 * message:
 *
 * Enter a message: Don't get mad, get even.
 * Reversal is: .neve teg ,dam teg t'noD
 *
 * Hint: Read the message one character at a time (using getchar) and store the
 * characters in an array. Stop reading when the array is full or the character
 * read is '\n'.
 *
 * (b) Revise the program to use a pointer instead of an integer to keep track
 * of the current position in the array.
 */
#include <stdio.h>

#define BUF 100

int main(void)
{
    int i;
    char input, msg[BUF];

    printf("\nEnter a message: ");
    for (i = 0; i < BUF; i++)
    {
        if ((input = getchar()) == '\n') break;
        msg[i] = input;
    }

    /* print the message in reverse, starting from the last character */
    printf("Reversal is: ");
    for (i = i-1; i >= 0; i--)
        putchar(msg[i]);
    printf("\n\n");

    return 0;
}
