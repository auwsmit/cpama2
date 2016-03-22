/* Write a program that asks the user for a 12-hour time, then displays the time in 24-hour form:
 *
 * Enter a 12-hour time: 9:11 PM
 * Equivalent 24-hour time: 21:11
 *
 * See Programming Project 8 for a description of the input format.
 */
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int input_h, input_m;
    char am_pm;

    printf("\nEnter a 12-hour time: ");
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

    printf("Equivalent 24-hour time: %.2d:%.2d\n\n", input_h, input_m);

    return 0;
}
