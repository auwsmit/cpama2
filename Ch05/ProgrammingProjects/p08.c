/* The following table table shows daily flights from one city to another:
 * Departure time   Arrival time
 *   8:00 a.m.      10:16 a.m.
 *   9:43 a.m.      11:52 a.m.
 *  11:19 a.m.       1:31 p.m.
 *  12:47 p.m.       3:00 p.m.
 *   2:00 p.m.       4:08 p.m.
 *   3:45 p.m.       5:55 p.m.
 *   7:00 p.m.       9:20 p.m.
 *   9:45 p.m.      11:58 p.m.
 *
 * Write a program that asks the user to enter a time (expressed in
 * hours and minutes, using the 24-hour clock). The program then
 * displays the departure and arrival times for the flight whose
 * departure time is closest to that entered by the user.:
 *
 * Enter a 24-hour time: 13:25
 * Closest departure time is 12:47 p.m., arriving at 3:00 p.m.
 *
 * Hint: Convert the input into a time expressed in minutes since
 * midnight, and compare it to the departure times, also expressed in
 * minutes since midnight. For example, 13:15 is 13 x 60 + 15 = 795
 * minutes since midnight, which is closer to 12:47 p.m. (767 minutes
 * since midnight) than to any of the other departure times.
 */
#include <stdio.h>

int main(void)
{
    int input_h, input_m, t8_00am, t9_43am, t11_19am,
        t12_47pm, t2_00pm, t3_45pm, t7_00pm, t9_45pm,
        tmidnight24, tmidnight0;

    printf("\nEnter a 24-hour time: ");
    scanf("%d:%d", &input_h, &input_m);

    input_m = input_h * 60 + input_m;

    /* departure times as minutes since midnight */
    t8_00am = (60 * 8);
    t9_43am = (60 * 9) + 43;
    t11_19am = (60 * 11) + 19;
    t12_47pm = (60 * 12) + 47;
    t2_00pm = (60 * 14);
    t3_45pm = (60 * 15) + 45;
    t7_00pm = (60 * 19);
    t9_45pm = (60 * 21) + 45;

    /* both representations of midnight */
    tmidnight24 = (60 * 24);
    tmidnight0 = 0;

    if (input_m >= tmidnight24 || input_m < tmidnight0)
    {
        printf("Entered invalid time.");
    }
    else
    {
        printf("Closest departure time is ");
        if (input_m >= tmidnight0 && input_m < t8_00am)
            printf("8:00 a.m., arriving at 10:16 a.m.");

        if (input_m >= t8_00am && input_m < t9_43am)
        {
            if (input_m - t8_00am < t9_43am - input_m)
                printf("8:00 a.m., arriving at 10:16 a.m.");
            else
                printf("9:43 a.m., arriving at 11:52 a.m.");
        }
        if (input_m >= t9_43am && input_m < t11_19am)
        {
            if (input_m - t9_43am < t11_19am - input_m)
                printf("9:43 a.m., arriving at 11:52 a.m.");
            else
                printf("11:19 a.m., arriving at 1:31 p.m.");
        }
        if (input_m >= t11_19am && input_m < t12_47pm)
        {
            if (input_m - t11_19am < t12_47pm - input_m)
                printf("11:19 a.m., arriving at 1:31 p.m.");
            else
                printf("12:47 p.m., arriving at 3:00 p.m.");
        }
        if (input_m >= t12_47pm && input_m < t2_00pm)
        {
            if (input_m - t12_47pm < t2_00pm - input_m)
                printf("12:47 p.m., arriving at 3:00 p.m.");
            else
                printf("2:00 p.m., arriving at 4:08 p.m.");
        }
        if (input_m >= t2_00pm && input_m < t3_45pm)
        {
            if (input_m - t2_00pm < t3_45pm - input_m)
                printf("2:00 p.m., arriving at 4:08 p.m.");
            else
                printf("3:45 p.m., arriving at 5:55 p.m.");
        }
        if (input_m >= t3_45pm && input_m < t7_00pm)
        {
            if (input_m - t3_45pm < t7_00pm - input_m)
                printf("3:45 p.m., arriving at 5:55 p.m.");
            else
                printf("7:00 p.m., arriving at 9:20 p.m.");
        }
        if (input_m >= t7_00pm && input_m < t9_45pm)
        {
            if (input_m - t7_00pm < t9_45pm - input_m)
                printf("7:00 p.m., arriving at 9:20 p.m.");
            else
                printf("9:45 p.m., arriving at 11:58 p.m.");
        }

        if (input_m >= t9_45pm && input_m < tmidnight24)
            printf("9:45 p.m., arriving at 11:58 p.m.");
    }

    printf("\n\n");

    return 0;
}
