/* For each of the following pairs of scanf format strings,
 * indicate whether or not the two strings are equivalent.
 * If they're not, show how they can be distinguished.
 * (a) "%d"       versus " %d"
 * (b) "%d-%d-%d" versus "%d -%d -%d"
 * (c) "%f"       versus "%f "
 * (d) "%f,%f"    versus "%f, %f"
 */
#include <stdio.h>

int main(void)
{
    float a, b, c;
    float x, y, z;

    /*scanf("%d", &a);*/
    /*printf("a1: %d\n", a);*/
    /*scanf(" %d", &b);*/
    /*printf("a2: %d\n", b);*/

    /*scanf("%d-%d-%d", &a, &b, &c);*/
    /*printf("b1: %d, %d, %d\n", a, b, c);*/
    /*scanf("%d -%d -%d", &x, &y, &z);*/
    /*printf("b2: %d, %d, %d\n", x, y, z);*/

    /*scanf("%f", &a);*/
    /*printf("c1: %f\n", a);*/
    /*scanf("%f ", &b);*/
    /*printf("c2: %f\n", b);*/

    scanf("%f,%f", &a, &b);
    printf("d1: %f, %f\n", a, b);
    scanf("%f, %f", &x, &y);
    printf("d2: %f, %f\n", x, y);

    return 0;
}

/* Answer:
 * (a) No discernible difference.
 * (b) The first format string doesn't allow blank characters after
 *     the numbers, but the second does.
 * (c) The 2nd format string causes scanf to search for an additional
 *     non-blank character after the number.
 * (d) No difference.
 */
