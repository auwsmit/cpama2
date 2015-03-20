/* Modify Programming Project 16 from Chapter 8 so that it includes the following functions:
 *
 * void read_word(int counts[26]);
 * bool equal_array(int counts1[26], int counts2[26]);
 *
 * main will read_word twice, once for each of the two words entered by the
 * user. As it reads a word, read_word will use the letters in the word to
 * update the counts array, as described in the original project. (main will
 * declare two arrays, one for each word. These arrays are used to track how
 * many times each letter occurs in the words.) main will then call equal_array,
 * passing it the two arrays, equal_array will return true if the elements in
 * the two arrays are identical (including that the words are anagrams) and
 * false otherwise.
 */
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h> /* C99 only */

void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);

int main(void)
{
    int letters_seen1[26] = {0};
    int letters_seen2[26] = {0};

    printf("\nEnter first word: ");
    read_word(letters_seen1);

    printf("Enter second word: ");
    read_word(letters_seen2);

    if (equal_array(letters_seen1, letters_seen2) == true)
        printf("The words are anagrams.\n\n");
    else
        printf("The words are not anagrams.\n\n");

    return 0;
}

void read_word(int counts[26])
{
    int i;
    char input;
    for (i = 0; (input = tolower(getchar())) != '\n'; i++)
        if (isalpha(input))
            counts[input - 'a']++;
}

bool equal_array(int counts1[26], int counts2[26])
{
    int i;
    for (i = 0; i < 26; i++)
        if (counts1[i] != counts2[i])
            return false;

    return true;
}
