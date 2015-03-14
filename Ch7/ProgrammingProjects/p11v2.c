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

int main(void)
{
    char first_name_letter, input;

    printf("\nEnter a first and last name: ");
    scanf(" %c", &first_name_letter);

    while (getchar() != ' ');

    while ((input = getchar()) != '\n')
    {
        if (input != ' ')
            putchar(input);
    }

    printf(", %c.\n\n", first_name_letter);

    return 0;
}
