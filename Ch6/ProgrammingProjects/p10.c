/* Programming Project 9 in Chapter 5 asked you to write a program
 * that determines which of two dates comes earlier on the calendar.
 * Generalize the program so that the user may enter any number of
 * dates. The user will enter 0/0/0 to indicate that no more dates
 * will be entered:
 *
 * Enter a date (mm/dd/yy): 3/6/08
 * Enter a date (mm/dd/yy): 5/17/07
 * Enter a date (mm/dd/yy): 6/3/07
 * Enter a date (mm/dd/yy): 0/0/0
 * 5/17/07 is the earliest date
 */
#include <stdio.h>

int main(void)
{
    int month1, day1, year1, month2, day2, year2;

    printf("\nEnter date: (mm/dd/yy): ");
    scanf("%d/%d/%d", &month1, &day1, &year1);

    for (;;)
    {
        printf("Enter date: (mm/dd/yy): ");
        scanf("%d/%d/%d", &month2, &day2, &year2);

        if (month2 == 0 && day2 == 0 && year2 == 0) break;

        if (year1 == year2)
        {
            if (month1 == month2)
            {
                if (day1 > day2)
                {
                    month1 = month2;
                    day1 = day2;
                    year1 = year2;
                }
            }
            else if (month1 > month2)
            {
                month1 = month2;
                day1 = day2;
                year1 = year2;
            }
        }
        else if (year1 > year2)
        {
            month1 = month2;
            day1 = day2;
            year1 = year2;
        }
    } 

    printf("%d/%d/%.2d is the earliest date\n\n",
            month1, day1, year1);

    return 0;
}
