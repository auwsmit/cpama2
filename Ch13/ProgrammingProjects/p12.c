/* Modify Programming Project 14 from Chapter 8 so that it stores the words in
 * a two-dimensional char array as it reads the sentence, with each row of the
 * array storing a single word. Assume that the sentence contains no more than
 * 30 words and is no more than 20 characters long. Be sure to store a null
 * character at the end of each word so that it can be treated as a string.
 */
#include <stdio.h>

#define MAX_WORDS 30
#define WORD_LEN 20

void get_sentence(char sentence[MAX_WORDS][WORD_LEN+1],
                  char *terminator);
void print_reverse_sentence(char sentence[MAX_WORDS][WORD_LEN+1],
                            char terminator);

int main(void)
{
    char terminator = 0;
    char sentence[MAX_WORDS][WORD_LEN+1] = {{0}};

    printf("\nEnter a sentence: ");
    get_sentence(sentence, &terminator);

    if (terminator == 0)
    {
        printf("Sentence needs a terminating character. (./?/!)\n\n");
        return 0;
    }

    printf("Reversal of sentence: ");
    print_reverse_sentence(sentence, terminator);
    printf("\n\n");

    return 0;
}

void get_sentence(char sentence[MAX_WORDS][WORD_LEN+1],
                  char *terminator)
{
    char input;
    int letter, word;

    letter = word = 0;
    while ((input = getchar()) != '\n')
    {
        if (word == MAX_WORDS)
            break;
        if (letter > WORD_LEN)
        {
            word++;
            letter = 0;
            continue;
        }
        if (input == ' ')
        {
            sentence[word++][letter] = '\0';
            letter = 0;
        }
        else if (input == '.' || input == '?' || input == '!')
        {
            sentence[word][letter] = '\0';
            *terminator = input;
            break;
        }
        else
            sentence[word][letter++] = input;
    }
}

void print_reverse_sentence(char sentence[MAX_WORDS][WORD_LEN+1],
                            char terminator)
{
    int letter, word;

    /* find last word */
    word = MAX_WORDS - 1;
    letter = WORD_LEN;
    for (; sentence[word][letter] == '\0'; letter--)
    {
        if (letter < 0)
        {
            letter = WORD_LEN;
            word--;
        }
    }

    /* print sentence in reverse */
    for (; word >= 0; word--)
    {
        for (letter = 0; sentence[word][letter] != '\0'; letter++)
        {
            putchar(sentence[word][letter]);
        }
        if (word == 0)
            putchar(terminator);
        else
            putchar(' ');
    }
}
