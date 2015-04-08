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
    char *p;
    char input, msg[BUF];

    printf("\nEnter a message: ");
    for (p = &msg[0]; p < &msg[0] + BUF; p++)
    {
        if ((input = getchar()) == '\n') break;
        *p = input;
    }

    /* print the message in reverse, starting from the last character */
    printf("Reversal is: ");
    for (p = p-1; p >= &msg[0]; p--)
        putchar(*p);
    printf("\n\n");

    return 0;
}
