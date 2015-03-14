/* Write a program that declares several int and float variables
 * --without initializing them-- and then print their values.
 * Is there any pattern to the values? (Usually there isn't.)
 */
#include <stdio.h>

int main(void)
{
    int a, b, c, d;
    float e, g, h, f;

    printf("\nint a: %d\n", a);
    printf("int b: %d\n", b);
    printf("int c: %d\n", c);
    printf("int d: %d\n", d);

    printf("float e: %.20f\n", e);
    printf("float f: %.20f\n", f);
    printf("float g: %.20f\n", g);
    printf("float h: %.20f\n\n", h);

    return 0;
}

/* Answer:
 * With no gcc error checking, ints are initialized with an
 * unknown (random) value, but floats are initialized to 0 automatically.
 *
 * With gcc error checking enabled, ints were also initialized to zero.
 */
