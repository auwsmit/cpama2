/* Modify Programming Programming 5 from Chapter 7 so that it includes the
 * following function:
 *
 * int compute_scrabble_value(const char *word);
 *
 * The function returns the SCRABBLE value of the string pointed to by the word.
 */
#include <stdio.h>
#include <ctype.h>

#define LEN 30 /* max length of a scrabble word */

int compute_scrabble_value(const char *word);

int main(void)
{
    char word[LEN];

    printf("\nEnter a word: ");
    scanf("%s", word);

    printf("Scrabble value: %d\n\n", compute_scrabble_value(word));

    return 0;
}

int compute_scrabble_value(const char *word)
{
    int score = 0;

    while (*word)
    {
        switch (toupper(*word++))
        {
            case 'A': case 'E':
            case 'I': case 'L':
            case 'N': case 'O':
            case 'R': case 'S':
            case 'T': case 'U':
                score += 1;
                break;

            case 'D': case 'G':
                score += 2;
                break;

            case 'B': case 'C':
            case 'M': case 'P':
                score += 3;
                break;

            case 'F':
            case 'H': case 'V':
            case 'W': case 'Y':
                score += 4;
                break;

            case 'K':
                score += 5;
                break;

            case 'J': case 'X':
                score += 8;
                break;

            case 'Q': case 'Z':
                score += 10;
                break;
        }
    }

    return score;
}
