/* Write a program that calculates the average word length for a sentence:
 *
 * Enter a sentence: It was deja vu all over again.
 * Average word length: 3.4
 *
 * For simplicity, your program should consider a punctuation mark to be a part
 * of the word to which it is attached. Display the average word length to one
 * decimal place.
 */
#include <stdio.h>

int main(void)
{
    int characters, words;
    char input, last_input;

    characters = words = last_input = 0; /* initializing to 0 */

    printf("\nEnter a sentence: ");

    while ((input = getchar()) != '\n')
    {
        if (input != ' ')
        {
            characters++;
            if (words == 0)
                words++;
        }
        else if (last_input != ' ')
            words++;

        last_input = input;
    }

    printf("Average word length: %.1f\n\n", (float) characters / words);

    return 0;
}
