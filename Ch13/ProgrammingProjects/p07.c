/* Modify Programming Project 11 from Chapter 5 so that it uses arrays
 * containing pointers to strings instead of switch statements. For example,
 * instead of using a switch statement to print the word for the first digit,
 * use the digit as an index into an array that contains the strings "twenty",
 * "thirty", and so forth.
 */
#include <stdio.h>

int main(void)
{
    int dig1, dig2;
    char *dig1_str[] = { "", "twenty", "thirty", "fourty", "fifty",
                       "sixty", "seventy", "eighty", "ninety" };
    char *teen_str[] = { "ten", "eleven", "twelve", "thirteen", "fourteen",
                    "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" };
    char *dig2_str[] = { "-one", "-two", "-three", "-four", "-five",
                       "-six", "-seven", "-eight", "-nine" };

    printf("\nEnter a two-digit number: ");
    scanf("%1d%1d", &dig1, &dig2);

    printf("You entered the number ");

    if (dig1 == 1)
        printf("%s", teen_str[dig2]);
    else
        printf("%s%s", dig1_str[dig1-1], dig2_str[dig2-1]);

    printf("\n\n");

    return 0;
}
