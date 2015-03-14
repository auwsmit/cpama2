/* Write a program that asks the user for a two-digit number, then
 * prints the English word for the number:
 *
 * Enter a two-digit number: 45
 * You entered the number forty-five.
 *
 * Hint: Break the number into two-digits. Use one switch statement to
 * print the word for the first digit ("twenty," "thirty," and so
 * forth), Use a second switch statement to print the word for the
 * second digit. Don't forget that the numbers between 11 and 19 require
 * special treatment.
 */
#include <stdio.h>

int main(void)
{
    int dig1, dig2;

    printf("\nEnter a two-digit number: ");
    scanf("%1d%1d", &dig1, &dig2);

    printf("You entered the number ");

    switch (dig1)
    {
        case 1:
            switch (dig2)
            {
                case 0:
                    printf("ten"); return 0;
                case 1:
                    printf("eleven"); return 0;
                case 2:
                    printf("twelve"); return 0;
                case 3:
                    printf("thirteen"); return 0;
                case 4:
                    printf("fourteen"); return 0;
                case 5:
                    printf("fifteen"); return 0;
                case 6:
                    printf("sixteen"); return 0;
                case 7:
                    printf("seventeen"); return 0;
                case 8:
                    printf("eigthteen"); return 0;
                case 9:
                    printf("nineteen"); return 0;
            }
        case 2:
            printf("twenty"); break;
        case 3:
            printf("thirty"); break;
        case 4:
            printf("forty"); break;
        case 5:
            printf("fifty"); break;
        case 6:
            printf("sixty"); break;
        case 7:
            printf("seventy"); break;
        case 8:
            printf("eighty"); break;
        case 9:
            printf("ninety"); break;
    }

    switch (dig2)
    {
        case 1:
            printf("-one"); break;
        case 2:
            printf("-two"); break;
        case 3:
            printf("-three"); break;
        case 4:
            printf("-four"); break;
        case 5:
            printf("-five"); break;
        case 6:
            printf("-six"); break;
        case 7:
            printf("-seven"); break;
        case 8:
            printf("-eight"); break;
        case 9:
            printf("-nine"); break;
    }

    printf("\n\n");

    return 0;
}
