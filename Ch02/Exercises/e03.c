/* Condense the dweight.c program by (1) replacing assignments to height,
 * length, and width with initializers and (2) removing the weight variable,
 * instead calculating (volume+165) / 166 with the last printf.
 */
#include <stdio.h>

int main(void)
{
    int height = 8, length = 12, width = 10, volume;

    volume = height * length * width;

    printf("\nDimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n\n", (volume + 165) / 166);

    return 0;
}
