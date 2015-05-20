/* Write a program that sorts a series of words entered by the user:
 *
 * Enter word: foo
 * Enter word: bar
 * Enter word: baz
 * Enter word: quux
 * Enter word:
 *
 * In sorted order: bar baz foo quux
 *
 * Assume that each word is no more than 20 characters long. Stop reading when
 * the user enters an empty word (i.e. presses Enter without entering a word).
 * Store each word in a dynamically allocated string, using an array of pointers
 * to keep track of the strings, as in the remind2.c (Section 17.2). After all
 * words have been read, sort the array (using any sorting technique) and then
 * use a loop to print the words in sorted order. Hint: Use the read_line
 * function to read each word, as in remind2.c
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN   20 /* max length of word */
#define MAX_WORDS 50 /* max number of words */

char *word[MAX_WORDS];
int num_words = 0;

int read_line();

int main(void)
{
    int smallest, i, j;
    char *temp;

    putchar('\n');
    for (i = 0; ; i++)
    {
        printf("Enter a word: ");
        if (read_line() == 0)
            break;
        if (num_words == MAX_WORDS)
            break;
    }

    /* sorting... */
    for (i = 0; i < num_words; i++)
    {
        smallest = i;
        for (j = i+1; j < num_words; j++)
            if (strcmp(word[j], word[smallest]) < 0)
                smallest = j;
        temp = word[i];
        word[i] = word[smallest];
        word[smallest] = temp;
    }

    printf("In sorted order: ");
    for (i = 0; i < num_words; i++)
    {
        printf("%s%s", word[i], i == num_words ? "" : " ");
    }
    printf("\n\n");

    return 0;
}

int read_line(char str[], int n)
{
    word[num_words] = malloc(MAX_LEN + 1);
    int ch, i = 0;

    if (!word[num_words])
    {
        printf("Memory allocation error.\n\n");
        exit(EXIT_FAILURE);
    }
    while ((ch = getchar()) != '\n')
        if (i < n)
            word[num_words][i++] = ch;
        else if (ch == ' ')
            break;
    word[num_words][i] = '\0';
    num_words++;
    return i;
}
