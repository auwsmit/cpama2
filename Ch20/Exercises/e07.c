/* Write the following function:
 *
 * unsigned int rotate_left(unsigned int i, int n);
 * unsigned int rotate_right(unsigned int i, int n);
 *
 * rotate_left should return the result of shifting the bits in i to the left by
 * n places, with the bits that were "shifted off" moved to the right end of i.
 * (For example, the call return rotate_left (0x12345678, 4) should return
 * 0x23456781 if integers are 32 long.) rotate_right is similar, but it should
 * "rotate" bits to the right instead of the left.
 */
#include <stdio.h>

unsigned int rotate_left(unsigned int i, int n)
{
    return (i >> (32 - n)) | (i << n);
}

unsigned int rotate_right(unsigned int i, int n)
{
    return (i << (32 - n)) | (i >> n);
}

int main(void)
{
    unsigned int num = 0x12345678;
    int bits_to_shift = 4;

    printf("\nNumber before: %x\n", num);
    printf("Number rotated by %d bits to the: \n", bits_to_shift);
    printf("left 0x%x\n", rotate_left(num, bits_to_shift));
    printf("right 0x%x\n\n", rotate_right(num, bits_to_shift));

    return 0;
}
