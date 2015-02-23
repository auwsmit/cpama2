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
	int input_hours, input_mins,
		depart_time, compare_time, arrival_time,
		arrival_hours, arrival_mins, depart_hours, depart_mins;

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &input_hours, &input_mins);

	input_mins = input_hours * 60 + input_mins;
	depart_time = 60 * 8;
	arrival_time = (60 * 10) + 16;
	compare_time = (60 * 9) + 43;

	if (input_mins > compare_time)
	{
		depart_time = compare_time;
		arrival_time = (60 * 11) + 52;
		compare_time = (60 * 11) + 19;
	}
	if (input_mins > compare_time)
	{
		depart_time = compare_time;
		arrival_time = (60 * 1) + 31;
		compare_time = (60 * 12) + 47;
	}
	if (input_mins > compare_time)
	{
		depart_time = compare_time;
		arrival_time = (60 * 15);
		compare_time = (60 * 14);
	}
	if (input_mins > compare_time)
	{
		depart_time = compare_time;
		arrival_time = (60 * 16) + 8;
		compare_time = (60 * 15) + 45;
	}
	if (input_mins > compare_time)
	{
		depart_time = compare_time;
		arrival_time = (60 * 17) + 55;
		compare_time = (60 * 19);
	}
	if (input_mins > compare_time)
	{
		depart_time = compare_time;
		arrival_time = (60 * 21) + 20;
		compare_time = (60 * 21) + 45;
	}
	if (input_mins > compare_time)
	{
		depart_time = compare_time;
		arrival_time = (60 * 23) + 58;
	}

	depart_mins = depart_time % 60;
	depart_hours = (depart_time - depart_mins) / 60;
	if (depart_hours > 12) depart_hours-= 12;
	arrival_mins = arrival_time % 60;
	arrival_hours = (arrival_time - arrival_mins) / 60;
	if (arrival_hours > 12) arrival_hours-= 12;

	printf("Closest departure time is: %d:%.2d %c.m., ",
		depart_hours, depart_mins,
		(depart_time - depart_mins) / 60 < 12 ? 'a' : 'p');
	printf("arriving at %d:%.2d %c.m.",
		arrival_hours, arrival_mins,
		(arrival_time - arrival_mins) / 60 < 12 ? 'a' : 'p');

	return 0;
}
