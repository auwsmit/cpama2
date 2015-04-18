/* Modify Programming Project 11 from Chapter 7 so that it includes the
 * following function:
 *
 * void reverse_name(char *name);
 *
 * The function expects name to point to a string containing a first name
 * followed by a last name. It modifies the string so that the last name comes
 * first, followed by a comma, a space, the first initial, and a period. The
 * original string may contain extra spaces before the first name, between the
 * first and last names, and after the last name.
 */
#include <stdio.h>
#include <ctype.h>

#define TRUE 1
#define FALSE 0
#define LEN 50 /* max length of name */

void reverse_name(char *name);

int main(void)
{
    char full_name[LEN], first_name[LEN/2], last_name[LEN/2];

    printf("\nEnter a first and last name: ");
    scanf("%s %s", first_name, last_name);
    sprintf(full_name, "%s %s", first_name, last_name);

    reverse_name(full_name);

    return 0;
}

void reverse_name(char *name)
{
    char first_name_letter = 0;
    int space = FALSE;

    for (; *name; name++)
    {
        if (!first_name_letter)
        {
            if (*name != ' ')
                first_name_letter = *name;
        }
        else if (space == FALSE)
        {
            if (*name == ' ')
                space = 1;
        }
        else if (*name != ' ')
            putchar(*name);
    }

    printf(", %c.\n\n", first_name_letter);
}
