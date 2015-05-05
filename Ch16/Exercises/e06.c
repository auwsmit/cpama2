/* Write the following function, assuming that the time structure contains three
 * members: hours, minutes, and seconds (all of type int)
 *
 * struct time split_time(long total_seconds);
 *
 * total_seconds is a time represented as the number of seconds since midnight.
 * The function returns a structure containing the equivalent time in hours
 * (0-23), minutes (0-59) and seconds (0-59).
 */
struct time { int hours, minutes, seconds; };

struct time split_time(long total_seconds)
{
    struct time conversion;
    conversion.seconds = total_seconds % 60;
    conversion.minutes = total_seconds / 60;
    conversion.hours = total_seconds / 60 / 60;
    return conversion;
}
