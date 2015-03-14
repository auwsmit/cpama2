/* Does the following statement always compute the fractional part of
 * f correctly (assuming that f and frac_part are float variables)?
 *
 * fract_part = f - (int) f;
 *
 * If not, what's the problem?
 */
#include <stdio.h>

int main(void)
{
    float f, fract_part;

    printf("\nEnter a fractional number (e.g. 1.55): ");
    scanf("%f", &f);

    fract_part = f - (int) f;
    printf("Fractional part: %f\n\n", fract_part);

    return 0;
}

/* Answer:
 * No, it will fail if the value of f exceeds the largest
 * value of an int.
 */
