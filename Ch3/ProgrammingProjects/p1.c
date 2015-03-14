/* Write a program that accepts a date from the user in the form
 * mm/dd/yyyy and then displays the form yyyymmdd
 */
#include <stdio.h>

int main(void)
{
    int month, day, year; 

    printf("\nEnter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("You entered the date %d%.2d%.2d\n\n", year, month, day);

    return 0;
}
