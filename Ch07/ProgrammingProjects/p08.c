/* Modify Programming Project 8 from Chapter 5 so that the user
 * enters a time using the 12 hour clock. The input will have the
 * form hours : minutes followed by either A, P, AM, or PM (either
 * lower-case or upper-case). White space is allowed (but not
 * required) between the numerical time and the AM/PM indicator.
 * Examples of valid input:
 *
 * 1:15P
 * 1:15PM
 * 1:15p
 * 1:15pm
 * 1:15 P
 * 1:15 PM
 * 1:15 p
 * 1:15 pm
 *
 * You may assume that the input has one of these forms, there is no
 * need to test for errors.
 */
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int input_h, input_m, t8_00am, t9_43am, t11_19am,
        t12_47pm, t2_00pm, t3_45pm, t7_00pm, t9_45pm, tmidnight;

    char am_pm;

    printf("\nEnter a 24-hour time: ");
    scanf("%d:%d %c", &input_h, &input_m, &am_pm);

    switch (toupper(am_pm))
    {
        case 'A':
            if (input_h == 12)
                input_h -= 12;
            break;
        case 'P':
            input_h = input_h + 12;
            break;
        default:
            printf("Specify am or pm please\n");
            return 0;
    }

    input_m = input_h * 60 + input_m;

    t8_00am = (60 * 8);
    t9_43am = (60 * 9) + 43;
    t11_19am = (60 * 11) + 19;
    t12_47pm = (60 * 12) + 47;
    t2_00pm = (60 * 14);
    t3_45pm = (60 * 15) + 45;
    t7_00pm = (60 * 19);
    t9_45pm = (60 * 21) + 45;
    tmidnight = (60 * 24);

    if (input_m >= 60 * 24 || input_m < 0)
    {
        printf("Entered invalid time.");
    }
    else
    {
        printf("Closest departure time is ");
        if (input_m >= 0 && input_m < t8_00am)
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
                printf("11:43 a.m., arriving at 1:31 p.m.");
        }
        if (input_m >= t11_19am && input_m < t12_47pm)
        {
            if (input_m - t11_19am < t12_47pm - input_m)
                printf("11:43 a.m., arriving at 1:31 p.m.");
            else
                printf("12:47 p.m., arriving at 2:00 p.m.");
        }
        if (input_m >= t12_47pm && input_m < t2_00pm)
        {
            if (input_m - t12_47pm < t2_00pm - input_m)
                printf("12:47 p.m., arriving at 2:00 p.m.");
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

        if (input_m >= t9_45pm && input_m < tmidnight)
            printf("9:45 p.m., arriving at 11:58 p.m.");
    }

    printf("\n\n");

    return 0;
}
