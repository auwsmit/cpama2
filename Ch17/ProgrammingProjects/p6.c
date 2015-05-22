/* Modify Programming Project 5 so that it uses qsort to sort the array of
 * pointers.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN   20 /* max length of word */
#define MAX_WORDS 50 /* max number of words */

char *words[MAX_WORDS];
int num_words = 0;

int read_line();
int compare(const void *a, const void *b);

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

    qsort(words, num_words, sizeof(char *), compare);

    printf("In sorted order: ");
    for (i = 0; i < num_words; i++)
    {
        printf("%s%s", words[i], i == num_words ? "" : " ");
    }
    printf("\n\n");

    return 0;
}

int read_line(char str[], int n)
{
    words[num_words] = malloc(MAX_LEN + 1);
    int ch, i = 0;

    if (!words[num_words])
    {
        printf("Memory allocation error.\n\n");
        exit(EXIT_FAILURE);
    }
    while ((ch = getchar()) != '\n')
        if (i < n)
            words[num_words][i++] = ch;
        else if (ch == ' ')
            break;
    words[num_words][i] = '\0';
    num_words++;
    return i;
}

int compare(const void *a, const void *b)
{
    return strcmp(*(char **)a, *(char **)b);
}
