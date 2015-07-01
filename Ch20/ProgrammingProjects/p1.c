/* Design a union that makes it possible to view a 32-bit value as either
 * a float or the structure described in Exercise 14. Write a program that
 * stores 1 in the structure's sign field, 128 in the exponent field, and 0 in
 * the fraction field, then prints the float value stored in the union. (The
 * answer should be -2.0 if you've set up the bit-fields correctly.)
 */
#include <stdio.h>

union IEEE_float {
    float f;
    struct {
        unsigned int frac: 23;
        unsigned int exp: 8;
        unsigned int sign: 1;
    } bits;
};

int main(void)
{
    union IEEE_float num;

    num.bits.sign = 1;
    num.bits.exp = 128;
    num.bits.frac = 0;

    printf("\nFloat bits: %d %d %d\n",
            num.bits.sign, num.bits.exp, num.bits.frac);
    printf("Float value: %.1f\n\n", num.f);

    return 0;
}
