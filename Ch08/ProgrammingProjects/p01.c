/* Modify the repdigit.c program of Section 8.1 so that it shows which digits
 * (if any) were repeated:
 *
 * Enter a number: 939577
 * Repeated digit(s): 7 9
 */
#include <stdbool.h> /* C99 only */
#include <stdio.h>

#define SEEN 0
#define REPEATED 1

int main(void)
{
    bool digit_seen[10][2] = {{false}};
    int digit, i;
    long n;

    printf("\nEnter a number: ");
    scanf("%ld", &n);

    while (n > 0)
    {
        digit = n % 10;
        if (digit_seen[digit][SEEN])
        {
            digit_seen[digit][REPEATED] = true;
        }
        digit_seen[digit][SEEN] = true;
        n /= 10;
    }

    for (i = 0; i < 10; i++)
    {
        if (digit_seen[i][REPEATED] == true)
        {
            printf("Repeated digit(s): ");
            break;
        }
        else if (i == 9) /* If all values were false */
        {
            printf("No repeated digits.\n\n");
            return 0;
        }
    }

    for (i = 0; i < 10; i++)
    {
        if (digit_seen[i][REPEATED] == true)
            printf("%d ", i);
    }
    printf("\n\n");

    return 0;
}
