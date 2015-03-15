/* The prototypical Internet newbie is a fellow named B1FF, who has a uniqe way
 * of writing messages. Here's a typical B1FF communique:
 *
 * H3Y DUD3, C 15 R1LLY C00L!!!!!!!!!!
 *
 * Write a "B1FF filter" that reads a message entered by the user that
 * translates it into B1FF-speak:
 *
 * Enter message: Hey dude, C is rilly cool
 * In B1FF-speak: H3Y DUD3, C 15 R1LLY C00L!!!!!!!!!!
 *
 * Your program should convert the message to upper-case letters, substitute
 * digits for certain letters (A->4, B->8, E->3, I->1, O->0, S->5), and then
 * append 10 or so exclamation marks. Hint: Store the original message in an
 * array of characters, then go back through the array, translating and
 * printing characters one by one.
 */
#include <ctype.h> /* C99 only */
#include <stdio.h>

#define LEN ((int)(sizeof(message) / sizeof(message[0])))

int main(void)
{
    char message[50], input;
    int i;
    printf("\nEnter message: ");

    for (i = 0; i < LEN; i++)
    {
        switch (input = toupper(getchar()))
        {
            case 'A':
                message[i] = '4';
                break;
            case 'B':
                message[i] = '8';
                break;
            case 'E':
                message[i] = '3';
                break;
            case 'I':
                message[i] = '1';
                break;
            case 'O':
                message[i] = '0';
                break;
            case 'S':
                message[i] = '5';
                break;
            default:
                message[i] = input;
        }
        if (input == '\n')
            break;
    }

    printf("In B1FF-speak: ");
    for (i = 0; i < LEN; i++)
    {
        if (message[i] == '\n')
            break;
        putchar(message[i]);
    }
    printf("!!!!!!!!!!\n\n");

    return 0;
}
