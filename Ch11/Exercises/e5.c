/* Write the following function:
 *
 * void split_time(long total_sec, int *hr, int *min, int *sec);
 *
 * total_sec is a time represented as a number of seconds since midnight. hr,
 * min, and sec are pointers to variables in which the function will store the
 * equivalent time in hours (0-23), minutes (0-59), and seconds (0-59),
 * respectively.
 */
void split_time(long total_sec, int *hr, int *min, int *sec)
{
    *sec = total_sec % 60;
    *min = total_sec / 60 % 60;
    *hr = total_sec / 60 / 60;
}
