/* Write a program that asks the user for a 24-hour time, then displays the
 * time in 12-hor form:
 *
 * Enter a 24-hour time: 22:11
 * Equivalent 12-hour time: 9:11 PM
 *
 * Be careful to not display 12:00 as 0:00.
 */
#include <stdio.h>

int main(void)
{
    int hours24, hours12, minutes;

    printf("\nEnter a 24-hour time: ");
    scanf("%d:%d", &hours24, &minutes);

    if (hours24 > 12 && hours24 <= 24)
        hours12 = hours24 - 12;
    else
        hours12 = hours24;

    printf("Equivalent 12-hour time: %d:%.2d ", hours12, minutes);

    if (hours24 == 24)
        printf("AM");
    else if (hours24 >= 12)
        printf("PM");
    else
        printf("AM");

    printf("\n\n");

    return 0;
}
