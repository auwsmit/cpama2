/* Modify the read_line function in each of the following ways:
 *
 * (a) Have it skip white space before beginning to store input characters.
 * (b) Have it stop reading at the first white-space character. Hint: To
 * determine whether or not a character is white space, call the isspace
 * function.
 * (c) Have it stop reading at the first new-line character, then store the
 * new-line character in the string.
 * (d) Have it leave behind characters that it doesn't have room to store.
 */
#include <stdio.h>
#include <ctype.h>

int read_line(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';
    return i;
}

int read_lineA(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i == 0 && isspace(ch))
            ; /* ignore */
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';
    return i;
}

int read_lineB(char str[], int n)
{
    int ch, i = 0;

    while (!isspace(ch = getchar()))
    {
        if (i < n)
            str[i++] = ch;
    }
    str[i] = '\0';
    return i;
}

int read_lineC(char str[], int n)
{
    int ch, i = 0;

    do
    {
        ch = getchar();
        if (i < n)
            str[i++] = ch;
    } while (ch != '\n');
    str[i] = '\0';
    return i;
}

int read_lineD(char str[], int n)
{
    int ch, i = 0;

    for (i = 0; i < n; i++)
    {
        ch = getchar();
        if (ch == '\n')
            break;
        str[i] = ch;
    }
    str[i] = '\0';
    return i;
}
