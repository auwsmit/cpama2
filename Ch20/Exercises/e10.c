/* Write the following function:
 *
 * unsigned int reverse_bits(unsigned int n);
 *
 * reverse_bits should return an unsigned integer whose bits are the same as
 * those in n but in reverse order.
 */
#include <stdio.h>

typedef unsigned int type;

type reverse_bits(type n)
{
    type i, j, reverse_n = 0;
    static int bits = sizeof(type) * 8;
    int offset = bits-1;

    for (i = 1; i <= bits/2; i++)
    {
        reverse_n |= (1 << bits-i) & (n << offset);
        offset -= 2;
    }
    offset += 2;

    for (; i <= bits; i++)
    {
        reverse_n |= (1 << bits-i) & (n >> offset);
        offset += 2;
    }

    return reverse_n;
}

int main(void)
{
    type num;
    printf("\nEnter a number in hexadecimal: ");
    scanf(" %x", &num);
    printf("Number with reversed bits: %x\n", reverse_bits(num));
    return 0;
}
