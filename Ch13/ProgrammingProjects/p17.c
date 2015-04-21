/* Modify Programming Project 2 from Chapter 12 so that it includes the
 * following function:
 *
 * bool is_palindrome(const char *message);
 *
 * The function returns true if the string pointed to by message is
 * a palindrome.
 */
#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define BUF 50
#define true 1
#define false 0
typedef int bool;

bool is_palindrome(const char *message);

int main(void)
{
    int i;
    char input, msg[BUF] = {0};
    printf("\nEnter a message: ");

    i = 0;
    while ((input = tolower(getchar())) != '\n')
        if (isalpha(input)) msg[i++] = input;
    msg[i] = '\0';

    if (is_palindrome(msg))
        printf("Palindrome\n\n");
    else
        printf("Not a palindrome\n\n");

    return 0;
}

bool is_palindrome(const char *message)
{
    int i, j;

    for (j = strlen(message) - 1, i = 0; i < BUF; i++)
    {
        if (message[i] == 0) break;
        if (message[i] != message[j])
        {
            return false;
        }
        j--;
    }

    return true;
}
