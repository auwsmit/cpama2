/* Modify Programming Project 1 from Chapter 12 so that it includes the
 * following function:
 *
 * void reverse(char *message);
 *
 * The function reverses the string pointed to by message. Hint: Use two
 * pointers, one initially pointing to the first character of the string and the
 * other initially pointing to the last character. Have the function reverse
 * these characters and then move the pointers toward each other, repeating the
 * process until the pointers meet.
 */
#include <stdio.h>
#include <string.h>

#define BUF 100

void reverse(char *message);

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
    *p = '\0';

    reverse(msg);

    printf("Reversal is: %s\n\n", msg);

    return 0;
}

void reverse(char *message)
{
    char *p1, *p2, temp;
    int n = strlen(message);

    p1 = message;
    p2 = message + n - 1;
    while (p1 <= p2)
    {
        temp = *p1;
        *p1 = *p2;
        *p2 = temp;
        p1++; p2--;
    }
}
