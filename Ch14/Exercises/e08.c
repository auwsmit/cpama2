/* Suppose we want a macro that expands into a string containing the current
 * line number and file name. In other words, we'd like to write
 *
 * const char *str = LINE_FILE;
 *
 * and have it expand into
 *
 * const char *str = "Line 10 of file foo.c";
 *
 * where foo.c is the file containing the program and 10 is the line on which
 * the invocation of LINE_FILE appears. Warning: This exercise is for experts
 * only. Be sure to read the Q&A section carefully before attempting.
 */
#include <stdio.h>

#define xstr(s) str(s)
#define str(s) #s
#define LINE_FILE "Line " xstr(__LINE__) " of file " __FILE__

int main(void)
{
    const char *str = LINE_FILE;

    printf("\n%s\n\n", str);
    return 0;
}
