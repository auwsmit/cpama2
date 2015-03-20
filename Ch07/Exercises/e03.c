/* Which of the following are not legal types in C?
 * (a) short unsigned int
 * (b) short float
 * (c) long double
 * (d) unsigned long
 */
#include <stdio.h>

int main(void)
{
    short unsigned int a;
    /* short float b; */
    long double c;
    unsigned long d;

    return 0;
}

/* Answer:
 * A - legal
 * B - illegal
 * C - legal
 * D - legal
 */
