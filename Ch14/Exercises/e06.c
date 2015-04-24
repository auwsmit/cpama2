/* (a) Write a macro DISP(f,x) that expands into a call of printf that displays
 * the value of the function f when called with argument x. For example,
 *
 * DISP(sqrt, 3.0);
 *
 * should expand into
 *
 * printf("sqrt(%g) = %g\n", 3.0, sqrt(3.0));
 *
 * (b) Write a macro DISP2(f,x,y) that's similar to DISP but works for functions
 * with two arguments.
 */
#include <stdio.h>
#include <math.h>

#define DISP(f,x) printf("f(%g) = %g\n", x, f(x))
#define DISP2(f,x,y) printf("f(%g, %g) = %g\n", x, y, f(x, y))

int main(void)
{
    putchar('\n');

    DISP(sqrt, 25.0);
    DISP2(fmod, 11.0, 5.0);

    putchar('\n');
    return 0;
}
