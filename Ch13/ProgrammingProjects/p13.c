/* Modify Programming Project 15 from Chapter 8 so that it includes the
 * following function:
 *
 * void encrypt(char *message, int shift);
 *
 * The function expects message to point to a string containing the message to
 * be encrypted; shift represents the amount by which each letter in the message
 * is to be shifted.
 */
#include <stdio.h>

#define BUFFER 50

void encrypt(char *message, int shift);

int main(void)
{
    char input, msg[BUFFER+1] = {0};
    int i, shift_amt;

    printf("\nEnter message to be encrypted: ");
    for (i = 0; (input = getchar()) != '\n'; i++)
    {
        if (i < BUFFER)
            msg[i] = input;
    }
    msg[BUFFER] = '\0';

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift_amt);

    if (shift_amt < 1 || shift_amt > 25)
    {
        printf("Incorrect shift amount.\n\n");
    }

    encrypt(msg, shift_amt);

    printf("Ecrypted message: ");
    for (i = 0; i < BUFFER; i++)
    {
        if (msg[i] == 0) break;
        putchar(msg[i]);
    }
    printf("\n\n");

    return 0;
}

void encrypt(char *message, int shift)
{
    for (; *message; message++)
    {
        if (*message >= 'A' && *message <= 'Z')
        {
            *message = ((*message - 'A') + shift) % 26 + 'A';
        }
        if (*message >= 'a' && *message <= 'z')
        {
            *message = ((*message - 'a') + shift) % 26 + 'a';
        }
    }
}
