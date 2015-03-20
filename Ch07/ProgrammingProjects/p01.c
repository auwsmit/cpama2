/* The square2.c program of Section 6.3 will fail (usually by
 * printing strange answers) if i * i exceeds the maximum int value.
 * Run the program and determine the smallest value of n that causes
 * failure. Try changing the type of i to short and running the
 * program again. (Don't forget to update the conversion
 * specifications in the call of printf!) Then try long. From these
 * experiments, what can you conclude about the number of bits used to
 * store integer types on your machine?
 */
#include <stdio.h>

int main(void)
{
    short i, n;

    printf("\nThis program prints a table of squares.\n");
    printf("Enter the number of entries in a table: ");
    scanf("%hd", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%10hd %10hd\n", i, i * i);
    }

    printf("\n");

    return 0;
}

/* Answer:
 * Smallest value of n that causes failure for int: 46341
 * Smallest value for short: 182
 * Smallest value for long: 46341
 *
 * Conclusion: Both int and long use 32 bits on my machine, except that since
 * they're signed, it's actually only 31 bits.
 */
