/* Modify Programming Project 16 from Chapter 8 so that it includes the
 * following function:
 *
 * bool are_anagrams(const char *word1, const char *word2);
 *
 * The function returns true if the strings pointed to be word1 and word2 are
 * anagrams.
 */
#include <stdio.h>
#include <ctype.h>

#define LEN 50
#define true 1
#define false 0
typedef int bool;

bool are_anagrams(const char *word1, const char *word2);

int main(void)
{
    char word1[LEN+1], word2[LEN+1];

    printf("\nEnter first word: ");
    fgets(word1, LEN+1, stdin);
    printf("Enter second word: ");
    fgets(word2, LEN+1, stdin);

    if (are_anagrams(word1, word2))
        printf("The words are anagrams.\n\n");
    else
        printf("The words are not anagrams.\n\n");

    return 0;
}

bool are_anagrams(const char *word1, const char *word2)
{
    int i, letters_seen[26] = {0};

    for (; *word1 != '\0'; word1++)
        if (isalpha(*word1))
            letters_seen[*word1 - 'a']++;

    for (; *word2 != '\0'; word2++)
        if (isalpha(*word2))
            letters_seen[*word2 - 'a']--;

    for (i = 0; i < 26; i++)
    {
        if (letters_seen[i] != 0)
        {
            return false;
        }
    }
    return true;
}
