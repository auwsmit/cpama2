/* Modify Programming Project 8 from Chapter 5 so that the departure times are
 * stored in an array and the arrival times are stored in a second array. (The
 * times are integers, representing the number of minutes since midnight.) The
 * program will use a loop to earch the array of departure times for the one
 * closest to the time entered by the user.
 */
#include <stdio.h>
#include <stdlib.h>

#define t8_00am (60 * 8)
#define t9_43am ((60 * 9) + 43)
#define t11_19am ((60 * 11) + 19)
#define t12_47pm ((60 * 12) + 47)
#define t2_00pm (60 * 14)
#define t3_45pm ((60 * 15) + 45)
#define t7_00pm (60 * 19)
#define t9_45pm ((60 * 21) + 45)

int main(void)
{
    int input_h, input_m, closest_time, i,
        depart_times[8] = {t8_00am, t9_43am,
                           t11_19am, t12_47pm,
                           t2_00pm, t3_45pm,
                           t7_00pm, t9_45pm};

    printf("\nEnter a 24-hour time: ");
    scanf("%d:%d", &input_h, &input_m);

    input_m = input_h * 60 + input_m;

    if (input_m >= 60 * 24 || input_m < 0)
    {
        printf("Entered invalid time.");
    }
    else
    {
        printf("Closest departure time is ");

        closest_time = depart_times[0];
        for (i = 1; i < 8; i++)
            if (abs(input_m - depart_times[i]) < abs(input_m - closest_time))
                closest_time = depart_times[i];

        if (closest_time == depart_times[0])
            printf("8:00 a.m., arriving at 10:16 a.m.");
        else if (closest_time == depart_times[1])
            printf("9:43 a.m., arriving at 11:52 a.m.");
        else if (closest_time == depart_times[2])
            printf("11:43 a.m., arriving at 1:31 p.m.");
        else if (closest_time == depart_times[3])
            printf("12:47 p.m., arriving at 2:00 p.m.");
        else if (closest_time == depart_times[4])
            printf("2:00 p.m., arriving at 4:08 p.m.");
        else if (closest_time == depart_times[5])
            printf("3:45 p.m., arriving at 5:55 p.m.");
        else if (closest_time == depart_times[6])
            printf("7:00 p.m., arriving at 9:20 p.m.");
        else if (closest_time == depart_times[7])
            printf("9:45 p.m., arriving at 11:58 p.m.");
    }
    printf("\n\n");

    return 0;
}
