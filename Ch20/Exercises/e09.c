/* Write the following function:
 *
 * int count_ones(unsigned char ch);
 *
 * count_ones should return the number of 1 bits in ch.
 *
 * (b) Write the function in part (a) without using a loop.
 */
#include <stdio.h>

/* Answer: */
int count_onesA(unsigned char ch)
{
    int i, one_count = 0;
    for (i = 0; i < 8; i++)
        if (ch & (1 << i))
            one_count++;
    return one_count;
}

int count_onesB(unsigned char ch)
{
    return (ch & 1)
         + ((ch >> 1) & 1)
         + ((ch >> 2) & 1)
         + ((ch >> 3) & 1)
         + ((ch >> 4) & 1)
         + ((ch >> 5) & 1)
         + ((ch >> 6) & 1)
         + ((ch >> 7) & 1);
}

int main(void)
{
    unsigned char num;
    printf("\nEnter a value between 0 and 255: ");
    scanf(" %hhu", &num);
    printf("Number of 1 bits in %hhu: %d\n\n", num, count_onesB(num));
    return 0;
}
