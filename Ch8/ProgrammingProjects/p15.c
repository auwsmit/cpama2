/* One of the oldest known encryption techniques is the Caesar cipher,
 * attributed to Julius Caesar. It involves replacing each letter in a message
 * with another letter that is a fixed number of positions later in the
 * alphabet. (If the replacement would go past the letter Z, the cipher
 * "wraps around" to the beginning of the alphabet. For example, if each letter
 * is replaced by the letter two positions after it, then Y would be replaced by
 * A, and Z would be replaced by B.) Write a program that encrypts a message
 * using a Caesar cipher. The user will enter the message to be encrypted
 * and the shift amount (the number of positions by which letters should be
 * shifted):
 *
 * Enter message to be encrypted: Go ahead, make my day.
 * Enter shift amount (1-25): 3
 * Encrypted message: Jr dkhdg, pdnh pb gdb.
 *
 * You may assume that the message does not exceed 80 characters.  Characters
 * other than letters should be left unchanged.  Lower-case letters remain
 * lower-case when encrypted, and upper-case letters remain upper-case. Hint:
 * To handle the wrap-around problem, use the expression ((ch - 'A') + n)
 * % 26 + 'A' to calculate the encrypted version of an upper-case letter,
 * where ch stores the letter and n stores the shift amount. (You'll need
 * a similar expression for lower-case letters.)
 */
#include <stdio.h>

#define BUFFER 50

int main(void)
{
    char input, msg[BUFFER] = {0};
    int i, shift_amt;

    printf("\nEnter message to be encrypted: ");
    for (i = 0; (input = getchar()) != '\n'; i++)
    {
        if (i < BUFFER) msg[i] = input;
    }

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift_amt);

    if (shift_amt < 1 || shift_amt > 25)
    {
        printf("Incorrect shift amount.\n\n");
    }

    for (i = 0; i < BUFFER; i++)
    {
        if (msg[i] == 0) break;

        if (msg[i] >= 'A' && msg[i] <= 'Z')
        {
            msg[i] = ((msg[i] - 'A') + shift_amt) % 26 + 'A';
        }
        if (msg[i] >= 'a' && msg[i] <= 'z')
        {
            msg[i] = ((msg[i] - 'a') + shift_amt) % 26 + 'a';
        }
    }

    printf("Ecrypted message: ");
    for (i = 0; i < BUFFER; i++)
    {
        if (msg[i] == 0) break;
        putchar(msg[i]);
    }
    printf("\n\n");

    return 0;
}
