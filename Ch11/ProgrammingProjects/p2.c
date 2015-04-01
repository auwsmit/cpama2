/* Modify Programming Project 8 from Chapter 5 so that it includes the following
 * function:
 *
 * void find_closest_flight(int desired_time,
 *                          int *departure_time,
 *                          int *arrival_time);
 *
 * This function will find the flight whose departure time is closest to
 * desired_time (expressed in minutes since midnight). It will store the
 * departure and arrival times of this flight (also expressed in minutes since
 * midnight) in the variables pointed to by departure_time and arrival_time,
 * respectively.
 */
#include <stdio.h>

void find_closest_flight(int desired_time,
                         int *departure_time,
                         int *arrival_time);

int main(void)
{
    int input_h, input_m,
        departure_time, depart_hr, depart_m,
        arrival_time, arrive_hr, arrive_m;

    printf("\nEnter a 24-hour time: ");
    scanf("%d:%d", &input_h, &input_m);

    /* input time as minutes since midnight */
    input_m = input_h * 60 + input_m;

    if (input_m >= (60 * 24) || input_m < 0)
        printf("Entered invalid time.");

    find_closest_flight(input_m, &departure_time, &arrival_time);

    depart_m = departure_time % 60;
    depart_hr = (departure_time - depart_m) / 60;
    arrive_m = arrival_time % 60;
    arrive_hr = (arrival_time - arrive_m) / 60;

    printf("Closest departure time is ");
    printf("%d:%.2d %c.m., arriving at %d:%.2d %c.m.", 
           (depart_hr > 12) ? depart_hr - 12 : depart_hr,
           depart_m, (depart_hr >= 12) ? 'p' : 'a',
           (arrive_hr > 12) ? arrive_hr - 12 : arrive_hr,
           arrive_m, (arrive_hr >= 12) ? 'p' : 'a');
    printf("\n\n");

    return 0;
}

void find_closest_flight(int desired_time,
                         int *departure_time,
                         int *arrival_time)
{
    /* departure and arrival times as minutes since midnight */
    int t8_00am  = (60 * 8),
        t9_43am  = (60 * 9) + 43,
        t11_19am = (60 * 11) + 19,
        t12_47pm = (60 * 12) + 47,
        t2_00pm  = (60 * 14),
        t3_45pm  = (60 * 15) + 45,
        t7_00pm  = (60 * 19),
        t9_45pm  = (60 * 21) + 45,
        t10_16am = (60 * 10) + 16,
        t11_52am = (60 * 11) + 52,
        t1_31pm  = (60 * 13) + 31,
        t3_00pm  = (60 * 15),
        t4_08pm  = (60 * 16) + 8,
        t5_55pm  = (60 * 17) + 55,
        t9_20pm  = (60 * 21) + 20,
        t11_58pm = (60 * 23) + 58;

    if (desired_time >= 0 && desired_time < t8_00am)
    {
        *departure_time = t8_00am;
        *arrival_time = t10_16am;
        return;
    }
    if (desired_time >= t8_00am && desired_time < t9_43am)
    {
        if (desired_time - t8_00am < t9_43am - desired_time)
        {
            *departure_time = t8_00am;
            *arrival_time = t10_16am;
            return;
        }
        else
        {
            *departure_time = t9_43am;
            *arrival_time = t11_52am;
            return;
        }
    }
    if (desired_time >= t9_43am && desired_time < t11_19am)
    {
        if (desired_time - t9_43am < t11_19am - desired_time)
        {
            *departure_time = t9_43am;
            *arrival_time = t11_52am;
            return;
        }
        else
        {
            *departure_time = t11_19am;
            *arrival_time = t1_31pm;
            return;
        }
    }
    if (desired_time >= t11_19am && desired_time < t12_47pm)
    {
        if (desired_time - t11_19am < t12_47pm - desired_time)
        {
            *departure_time = t11_19am;
            *arrival_time = t1_31pm;
            return;
        }
        else
        {
            *departure_time = t12_47pm;
            *arrival_time = t3_00pm;
            return;
        }
    }
    if (desired_time >= t12_47pm && desired_time < t2_00pm)
    {
        if (desired_time - t12_47pm < t2_00pm - desired_time)
        {
            *departure_time = t12_47pm;
            *arrival_time = t3_00pm;
            return;
        }
        else
        {
            *departure_time = t2_00pm;
            *arrival_time = t4_08pm;
            return;
        }
    }
    if (desired_time >= t2_00pm && desired_time < t3_45pm)
    {
        if (desired_time - t2_00pm < t3_45pm - desired_time)
        {
            *departure_time = t2_00pm;
            *arrival_time = t4_08pm;
            return;
        }
        else
        {
            *departure_time = t3_45pm;
            *arrival_time = t5_55pm;
            return;
        }
    }
    if (desired_time >= t3_45pm && desired_time < t7_00pm)
    {
        if (desired_time - t3_45pm < t7_00pm - desired_time)
        {
            *departure_time = t3_45pm;
            *arrival_time = t5_55pm;
            return;
        }
        else
        {
            *departure_time = t7_00pm;
            *arrival_time = t9_20pm;
            return;
        }
    }
    if (desired_time >= t7_00pm && desired_time < t9_45pm)
    {
        if (desired_time - t7_00pm < t9_45pm - desired_time)
        {
            *departure_time = t7_00pm;
            *arrival_time = t9_20pm;
            return;
        }
        else
        {
            *departure_time = t11_58pm;
            *arrival_time = t9_45pm;
            return;
        }
    }
    if (desired_time >= t9_45pm && desired_time < (60 * 24))
    {
        *departure_time = t11_58pm;
        *arrival_time = t9_45pm;
        return;
    }
}
