/* Find the error in the following function and show how to fix it.
 *
 * int count_periods(const char *filename)
 * {
 *   FILE *fp;
 *   int n = 0;
 *
 *   if ((fp = fopen(filename, "r") != NULL) {
 *     while (fgetc(fp) != EOF)
 *       if (fgetc(fp) == '.')
 *        n++;
 *     fclose(fp);
 *   }
 *
 *   return n;
 * }
 */

/* Answer:
 * The error is that fgetc is being called twice when it shouldn't. First to
 * check for EOF, and then again to check if it's a period. This causes every
 * other letter of input to be skipped.
 *
 * The solution is to use a variable to contain the first call of fgetc, and to
 * check if that variable is a period rather than calling fgetc a second time
 *
 * Revised version:
 */
int count_periods(const char *filename)
{
  FILE *fp;
  int n = 0;
  char ch;

  if ((fp = fopen(filename, "r")) != NULL) {
    while ((ch = fgetc(fp)) != EOF)
      if (ch == '.')
       n++;
    fclose(fp);
  }

  return n;
}
