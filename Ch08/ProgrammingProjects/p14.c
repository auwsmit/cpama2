/* Write a program that reverses words in a sentence:
 *
 * Enter a sentence: you can cage a swallow can't you?
 * Reversal of sentence: you can't swallow a cage can you?
 *
 * Hint: Use a loop to read the characters one by one and store them in
 * a one-dimensional char array. Have the loop stop at a period, question mark,
 * or exclamation point (the "terminating character"), which is saved in
 * a separate char variable. Then use a second loop to search backward through
 * the array for the beginning of the last word. Print the last word, then
 * search backward for the next-to-last word. Repeat until the beginning of the
 * array is reached. Finally, print the terminating character.
 */
#include <stdio.h>

#define LEN 50

int main(void)
{
    char input, terminator = 0, sentence[LEN+1] = {0};
    int i, j, last_space = LEN + 1;

    printf("\nEnter a sentence: ");
    for (i = 0; (input = getchar()) != '\n'; i++)
    {
        if (input == '.' || input == '?' || input == '!')
        {
            last_space = i;
            terminator = input;
            break;
        }
        sentence[i] = input;
    }

    if (terminator == 0)
    {
        printf("Sentence needs a terminating character. (./?/!)\n\n");
        return 0;
    }

    printf("Reversal of sentence: ");
    for (i = last_space; i > 0; i--)
    {
        if (sentence[i] == ' ')
        {
            for (j = i + 1; j != last_space; j++)
            {
                putchar(sentence[j]);
            }
            last_space = i;
            putchar(sentence[i]);
        }
    }
    while (sentence[i] != '\0' && sentence[i] != ' ')
    {
        putchar(sentence[i++]);
    }
    printf("%c\n\n", terminator);

    return 0;
}
