/* What is the value of each of the following expressions in C89?
 * (Give all possible values if an expression may have more than one value.)
 * (a) 8 % 5
 * (b) -8 % 5
 * (c) 8 % -5
 * (d) -8 % -5
 */
#include <stdio.h>

int main(void)
{
    printf("\n(a) %d\n", 8 % 5);
    printf("(b) %d\n", -8 % 5);
    printf("(c) %d\n", 8 % -5);
    printf("(d) %d\n\n", -8 % -5);

    return 0;
}

/* Answer:
 * (a) 3
 * (b) -3 or 2
 * (c) 3 or -2
 * (d) -3 or 2
 */
