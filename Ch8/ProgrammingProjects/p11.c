/* Modify Programming Project 4 from Chapter 7 so that the program labels its
 * output:
 *
 * Enter phone number: 1-800-COL-LECT
 * In numeric form: 1-800-265-5328
 *
 * The program will need to store the phone number (either in its original form
 * or in its numeric form) in an array of characters until it can be printed.
 * You may assume that the phone number is no more than 15 characters long.
 */
#include <stdio.h>
#include <ctype.h>

#define MAX_SIZE 15

int main(void)
{
    char ch, numeric_form[MAX_SIZE] = {0};
    int i = 0;

    printf("\nEnter phone number: ");

    while ((ch = toupper(getchar())) != '\n')
    {
        switch (ch)
        {
            case 'A': case 'B': case 'C':
                numeric_form[i] = '2';
                break;
            case 'D': case 'E': case 'F':
                numeric_form[i] = '3';
                break;
            case 'G': case 'H': case 'I':
                numeric_form[i] = '4';
                break;
            case 'J': case 'K': case 'L':
                numeric_form[i] = '5';
                break;
            case 'M': case 'N': case 'O':
                numeric_form[i] = '6';
                break;
            case 'P': case 'R': case 'S':
                numeric_form[i] = '7';
                break;
            case 'T': case 'U': case 'V':
                numeric_form[i] = '8';
                break;
            case 'W': case 'X': case 'Y':
                numeric_form[i] = '9';
                break;
            default:
                numeric_form[i] = ch;
        }
        i++;
    }

    printf("In numeric form: ");
    for (i = 0; i < MAX_SIZE; i++)
    {
        if (numeric_form[i] == 0) break;
        putchar(numeric_form[i]);
    }
    printf("\n\n");

    return 0;
}
