/* Write a program named reverse.c that echoes its command-line arguments in
 * reverse order. Run the program by typing
 *
 * reverse void and null
 *
 * should produce the following output:
 *
 * null and void
 */
#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;
    if (argc == 1)
    {
        printf("\nUsage: %s words as arguments like this\n\n", argv[0]);
        return 0;
    }
    putchar('\n');
    for (i = argc-1; i > 0; i--)
        printf("%s ", argv[i]);
    printf("\n\n");
    return 0;
}
