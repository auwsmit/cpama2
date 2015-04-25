/* Show what the following program will look like after preprocessing. Some
 * lines of the program may cause compilation errors; find all such errors.
 *
 * #define N = 10
 * #define INC(x) x+1
 * #define SUB (x,y) x-y
 * #define SQR(x) ((x)*(x))
 * #define CUBE(x) (SQR(x)*(x))
 * #define M1(x,y) x##y
 * #define M2(x,y) #x #y
 *
 * int main(void)
 * {
 *   int a[N], i, j, k, m;
 *
 * #ifdef N
 *   i = j;
 * #else
 *   j = i;
 * #endif
 *
 *   i = 10 * INC(j);
 *   i = SUB(j, k);
 *   i = SQR(SQR(j));
 *   i = CUBE(j);
 *   i = M1(j, k);
 *   puts(M2(i, j));
 *
 * #undef SQR
 *   i = SQR(j);
 * #define SQR
 *   i = SQR(j);
 *
 *   return 0;
 * }
 */
int main(void)
{
  int a[10], i, j, k, m;

  i = j;

  i = 10 * j+1;
  i = (x,y) x-y(j, k);
  i = ((((j)*(j)))*(((j)*(j))));
  i = (((j)*(j))*(j));
  i = jk;
  puts("i" "j");

  i = SQR(j);

  i = (j);

  return 0;
}

/* Answer:
 * ^ Program after preprocessing shown above. ^
 *
 * Compilation related Errors:
 * #define N = 10
 * - The = is considered part of the replacement list, so a[N] is expanded to
 *   a[= 10] incorrectly.
 *
 * #define INC(x) x+1
 * - Missing parenthesis. x+1 should be ((x)+1) so that it doesn't possibly ruin
 *   an intended order of operations.
 *
 * #define SUB (x,y) x-y
 * - parameterized macros can't have a space between the macro name and the
 *   parenthesis of its parameters.
 *
 * #define M1(x,y) x##y
 * - Missing parenthesis.
 *
 * #define M2(x,y) #x #y
 * - Missing parenthesis.
 *
 * i = M1(j, k);
 * - M1(j, k) expands to jk, which isn't a declared variable
 *
 * #undef SQR
 *   i = SQR(j);
 * - SQR becomes a compilation error, having been undefined.
 */
