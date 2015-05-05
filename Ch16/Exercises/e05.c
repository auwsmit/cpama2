/* Write the following functions, assuming that the date structure contains
 * three members: month, day, and year (all of type int).
 *
 * (a) day_of_year(struct date d);
 *
 * Returns the day of the year (an integer between 1 and 366) that corresponds
 * to the date d.
 *
 * (b) int compare_dates(struct date d1, struct date d2);
 *
 * Returns -1 if d1 is an earlier date than d2, +1 if d1 is later than d2, and
 * 0 if d1 and d2 are the same.
 */
#define FEB 1
typedef enum {false, true} bool;

struct date { int day, month, year; };

/* Answer:
 * A: */
int day_of_year(struct date d)
{
    bool is_leap_year;
    int i, month_days[12] = { /* Jan Feb Mar Apr May Jun */
                                 31, 28, 31, 30, 31, 30,
                              /* Jul Aug Sep Oct Nov Dec */
                                 31, 31, 30, 31, 30, 31 };

    if (d.year % 4 != 0)
        is_leap_year = false;
    else if (d.year % 100 != 0)
        is_leap_year = true;
    else if (d.year % 400 != 0)
        is_leap_year = false;
    else
        is_leap_year = true;

    if (is_leap_year == true) month_days[FEB] = 29;

    for (i = 0; i < d.month - 1; i++)
        d.day += month_days[i];

    return d.day;
}

/* B: */
int compare_dates(struct date d1, struct date d2)
{
    if (d1.year < d2.year)
        return -1;
    else if (d1.year > d2.year)
        return 1;
    else if (d1.month < d2.month)
        return -1;
    else if (d1.month > d2.month)
        return 1;
    else if (d1.day < d2.day)
        return -1;
    else if (d1.day > d2.day)
        return 1;
    else /* dates are equal */
        return 0;
}
