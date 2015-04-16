/* Improve the remind.c program of Section 13.5 in the following ways:
 *
 * (a) Have the program print an error message and ignore a reminder if the
 *     corresponding day is negative or larger than 31. Hint: Use the continue
 *     statement.
 * (b) Allow the user to enter a day, a 24-hour time, and a reminder. The
 *     printed reminder list should be sorted first by day, then by time. (The
 *     original program allows the user to enter a time, but it's treated as
 *     part of the reminder.)
 * (c) Have the program print a one-year reminder list. Require the user to
 *     enter days in the form month/day.
 */
#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50   /* maximum number of reminders */
#define MSG_LEN 60      /* max length of reminder message */
#define TIME_LEN 7      /* length of the month and day string */

int read_line(char str[], int n);

int main(void)
{
    char reminders[MAX_REMIND][MSG_LEN+3];
    char time_str[TIME_LEN], msg_str[MSG_LEN+1];
    int month, day, i, j, num_remind = 0;

    for (;;)
    {
        if (num_remind == MAX_REMIND)
        {
            printf("-- No space left --\n");
            break;
        }

        printf("Enter a month/day and reminder: ");
        scanf("%2d", &month);
        if (month == 0)
            break;
        else if (month < 1 || month > 12)
        {
            printf("Error: Month out of range\n");
            continue;
        }
        scanf("/ %2d", &day);
        if (day < 1 || day > 31)
        {
            printf("Error: Day out of range\n");
            while (getchar() != '\n'); /* clear buffer */
            continue;
        }
        sprintf(time_str, "%2d/%.2d", month, day);
        read_line(msg_str, MSG_LEN);

        for (i = 0; i < num_remind; i++)
            if (strcmp(time_str, reminders[i]) < 0)
                break;
        for (j = num_remind; j > i; j--)
            strcpy(reminders[j], reminders[j-1]);

        strcpy(reminders[i], time_str);
        strcat(reminders[i], msg_str);

        num_remind++;
    }

    printf("\nDate   Reminder\n");
    for (i = 0; i < num_remind; i++)
        printf(" %s\n", reminders[i]);

    return 0;
}

int read_line(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';
    return i;
}
