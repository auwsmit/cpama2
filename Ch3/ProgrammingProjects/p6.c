/* Modify the addfrac.c program of Section 3.2 so that the user enters
 * both fractions at the same time, separated by a plus sign.
 */
#include <stdio.h>

int main(void)
{
    int num1, denom1, num2, denom2, result_num, result_denom;

    printf("\nEnter two fractions separated by a plus sign: ");
    scanf("%d/%d + %d/%d", &num1, &denom1, &num2, &denom2);

    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;
    printf("The sum is %d/%d\n\n", result_num, result_denom);

    return 0;
}
