/* Modify Programming Project 11 from Chapter 7 so that the program labels its
 * output:
 *
 * Enter a first and last name: Lloyd Fosdick
 * You entered the name: Fosdick, L.
 *
 * The program will need to store the last name (but not the first name) in an
 * array of characters until it can be printed. You may assume that the last
 * name is no more than 20 characters long.
 */
#include <stdio.h>
#include <ctype.h>

#define BUFFER 20

int main(void)
{
    char first_name_letter, input;
    char last_name[BUFFER] = {0};
    int i = 0;

    printf("\nEnter a first and last name: ");
    scanf(" %c", &first_name_letter);

    while (getchar() != ' ');

    while ((input = getchar()) != '\n' && i < 20)
    {
        if (input != ' ')
        {
            last_name[i] = input;
            i++;
        }
    }

    printf("You entered the name: ");
    for (i = 0; i < BUFFER; i++)
    {
        if (last_name[i] == 0) break;
        printf("%c", last_name[i]);
    }
    printf(", %c.\n\n", first_name_letter);

    return 0;
}
