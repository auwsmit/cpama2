/* Modify Programming Project 10 from Chapter 7 so that it includes the
 * following function:
 *
 * int compute_vowel_count(const char *sentence);
 *
 * The function returns the number of vowels in the string pointed to by the
 * sentence parameter.
 */
#include <stdio.h>
#include <ctype.h>

#define LEN 50 /* max length of sentence */

int compute_vowel_count(const char *sentence);

int main(void)
{
    char sentence[LEN];

    printf("\nEnter a sentence: ");
    fgets(sentence, LEN, stdin);

    printf("Your sentence contains %d vowels.\n\n",
           compute_vowel_count(sentence));

    return 0;
}

int compute_vowel_count(const char *sentence)
{
    int vowels = 0;

    while (*sentence)
    {
        switch (toupper(*sentence++))
        {
            case 'A': case 'E': case 'I': case 'O': case 'U':
                vowels++;
        }
    }

    return vowels;
}
