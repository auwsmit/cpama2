/* Write the following function:
 *
 * int lien_length(const char *filename, int n);
 *
 * The functions should return the length of n in the text file whose name is
 * filename (assuming that the first line in the file is 1). If the line doesn't
 * exist, the function should return 0;
 *
 */

/* Answer: */
int line_length(const char *filename, int n)
{
    FILE *fp;
    char ch;
    int len = 0;

    if ((fp = fopen(filename, "r")) == NULL)
        return 0;
    for (; n > 1; --n)
        while ((ch = fgetc(fp)) != '\n')
            if (ch == EOF)
                return 0;
    while ((ch = fgetc(fp)) != '\n' && ch != EOF)
        len++;
    return len;
}
