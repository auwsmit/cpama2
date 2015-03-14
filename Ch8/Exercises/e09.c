/* Using the array of Exercise 8, write a program fragment that computes the
 * average temperature for a month (averaged over all the days of the month and
 * all hours of the day).
 */

/* Answer: */
int temperature_readings[30][24]; /* From exercise 8 */
int day, hour, average_temperature = 0;

for (day = 0; day < 30; day++)
    for (hour = 0; hour < 24; hour++)
        average_temperature += temperature_readings[day][hour];

average_temperature /= (30 * 24);
