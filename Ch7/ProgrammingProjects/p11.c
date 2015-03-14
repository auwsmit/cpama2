/* Write a program that takes the first name and last name entered by
 * the user and displays the last name, a comma, and the first
 * initial, followed by a period:
 *
 * Enter a first and last name: Lloyd Fosdick
 * Fosdick, L.
 *
 * Ths user's input may contain extra spaces before the first name,
 * between the first and last names, and after the last name.
 */
#include <stdio.h>
#include <ctype.h>

#define TRUE 1
#define FALSE 0

int main(void)
{
    char input, first_name_letter = 0;
    int space = FALSE;

    printf("\nEnter a first and last name: ");

    while ((input = getchar()) != '\n')
    {
        if (!first_name_letter)
        {
            if (input != ' ')
                first_name_letter = input;
        }
        else if (space == FALSE)
        {
            if (input == ' ')
                space = 1;
        }
        else if (input != ' ')
            putchar(input);
    }

    printf(", %c.\n\n", first_name_letter);

    return 0;
}
