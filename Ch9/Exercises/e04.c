/* Write a function day_of_year (month, day, year) that returns the day of the
 * year (an integer between 1 and 366) specifically by the three arguments.
 */
#include <stdbool.h>
#include <stdio.h>

#define FEB 1

int day_of_year(int month, int day, int year)
{
    bool is_leap_year;
    int i, month_days[12] = { /* Jan Feb Mar Apr May Jun */
                                 31, 28, 31, 30, 31, 30,
                              /* Jul Aug Sep Oct Nov Dec */
                                 31, 31, 30, 31, 30, 31 };

    if (year % 4 != 0)
        is_leap_year = false;
    else if (year % 100 != 0)
        is_leap_year = true;
    else if (year % 400 != 0)
        is_leap_year = false;
    else
        is_leap_year = true;

    if (is_leap_year == true) month_days[FEB] = 29;

    for (i = 0; i < month - 1; i++)
        day += month_days[i];

    return day;
}

int main(void)
{
    int month, day, year;

    printf("\nEnter a month, day, and year: ");
    scanf("%d%d%d", &month, &day, &year);
    printf("Result: %d\n\n", day_of_year(month, day, year));

    return 0;
}
