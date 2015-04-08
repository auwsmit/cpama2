/* Modify Programming Project 14 from Chapter 8 so that it uses a pointer
 * instead of an integer to keep track of the current position in the array that
 * contains the sentence.
 */
#include <stdio.h>

#define BUF 50

int main(void)
{
    char input, terminator = 0, sentence[BUF] = {0};
    char *p, *j, *last_space;

    last_space = sentence + BUF;

    printf("\nEnter a sentence: ");
    for (p = sentence; (input = getchar()) != '\n'; p++)
    {
        if (input == '.' || input == '?' || input == '!')
        {
            terminator = input;
            break;
        }
        *p = input;
    }

    if (terminator == 0)
    {
        printf("Sentence needs a terminating character. (./?/!)\n\n");
        return 0;
    }

    printf("Reversal of sentence: ");
    for (p = sentence + BUF-1; p >= sentence; p--)
    {
        if (*p == ' ')
        {
            for (j = p + 1; j != last_space; j++)
            {
                putchar(*j);
            }
            last_space = p;
            putchar(*p);
        }
    }
    for (; p != last_space; p++)
    {
        putchar(*p);
    }
    printf("%c\n\n", terminator);

    return 0;
}
