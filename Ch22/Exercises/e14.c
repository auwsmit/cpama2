/* (a) Write your own version of the fgets functin. Make it bahave as much like
 *     the real fgets function as possible; in particular, make sure that it has
 *     the proper return value. To avoid conflucts with the standard library,
 *     don't name your function fgets.
 *
 * (b) Write your own version of fputs, following the same rules as in part (a).
 */
#include <stdio.h>
#include <stdlib.h>

char *my_fgets(char *str, int n, FILE *stream)
{
    char ch, *orig = str;
    int i;

    if ((ch = fgetc(stream)) == EOF)
        return NULL;
    *str++ = ch;

    for (i = 1; i < n; ++i) {
        if ((ch = fgetc(stream)) == EOF)
            break;
        *str++ = ch;
    }

    return orig;
}

int my_fputs(const char *str, FILE *stream)
{
    while (*str != '\0')
        if (fputc(*str++, stream) == EOF)
            return EOF;
    return 0;
}
