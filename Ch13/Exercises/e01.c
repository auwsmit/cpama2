/* The following function calls supposedly write a single new-line character,
 * but some are incorrect. Identify which calls don't work and explain why.
 *
 * (a) printf("%c\n", '\n');      (g) putchar('\n');
 * (b) printf("%c\n", "\n");      (h) putchar("\n");
 * (c) printf("%s\n", '\n');      (i) puts('\n');
 * (d) printf("%s\n", "\n");      (j) puts("\n");
 * (e) printf('\n');              (k) puts("");
 * (f) printf("\n");
 */
#include <stdio.h>

int main(void)
{
    printf("%c\n", '\n'); putchar('a');

    printf("%s\n", "\n"); putchar('d');

    printf("\n"); putchar('f');

    putchar('\n'); putchar('g');

    puts("\n"); putchar('j');

    puts(""); putchar('k');

    return 0;
}

/* Answer:
 * A - Prints two new lines instead of one
 * B - %c expects a character, but gets a string
 * C - %s expects a string, but gets a character
 * D - Prints two new lines instead of one
 * E - Printf needs a string, but gets a character
 * H - putchar expects a character, but gets a string
 * I - puts expects a string, but gets a character
 * J - Prints two new line characters
 */
