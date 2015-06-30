/* The following function supposedly combines two bytes to form an unsigned
 * short integer. Explain why the function doesn't work and show how to fix it.
 *
 * unsigned short create_short(unsigned char high_byte,
 *                             unsigned char low_byte)
 * {
 *   return high_byte << 8 + low_byte;
 * }
 *
 */
#include <stdio.h>
#include <string.h>

/* Answer:
 * The function doesn't work because + has higher precedence than <<.
 *
 * Fixed: */
unsigned short create_short(unsigned char high_byte,
                            unsigned char low_byte)
{
    return (high_byte << 8) + low_byte;
}

int main(void)
{
    unsigned char high = 8, low = 2;
    unsigned short combined = create_short(high, low);
    printf("\nlow: %d, high: %d", low, high);
    printf("\nboth: %d\n\n", combined);

    return 0;
}
