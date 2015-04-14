/* Use the techniques of Section 13.6 to condense the count_spaces function of
 * Section 13.4. In particular, replace the for statement by a while loop.
 */
/* original */
int count_spacesA(const char s[])
{
    int count = 0, i;

    for (i = 0; s[i] != '\0'; i++)
        if (s[i] == ' ')
            count++;
    return count;
}

/* condensed */
int count_spacesB(const char s[])
{
    int count = 0;

    while (*s++)
        if (*s == ' ')
            count++;
    return count;
}
