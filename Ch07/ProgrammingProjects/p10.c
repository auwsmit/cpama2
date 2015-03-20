/* Write a program that counts the number of vowels (a, e, i, o, and u) in a sentence:
 *
 * Enter a sentence: And that's the way it is.
 * Your sentence contains 6 vowels.
 */
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char input;
    int vowels = 0;

    printf("\nEnter a sentence: ");

    while ((input = getchar()) != '\n')
    {
        switch (toupper(input))
        {
            case 'A': case 'E': case 'I': case 'O': case 'U':
                vowels++;
        }
    }

    printf("Your sentence contains %d vowels.\n\n", vowels);

    return 0;
}
