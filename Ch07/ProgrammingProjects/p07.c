/* Modify Programming Project 6 from Chapter 3 so that the user may
 * add, subtract, multiply, or divide two fractions (by entering
 * either +, -, *, or / between the fractions).
 */
#include <stdio.h>

int main(void)
{
    int num1, denom1, num2, denom2, result_num, result_denom;
    char sign;

    printf("\nEnter two fractions separated by a +, -, *, or /: ");
    scanf("%d/%d %c %d/%d", &num1, &denom1, &sign, &num2, &denom2);

    switch (sign)
    {
        case '+':
            result_num = num1 * denom2 + num2 * denom1;
            result_denom = denom1 * denom2;
            printf("The sum is ");
            break;

        case '-':
            result_num = num1 * denom2 - num2 * denom1;
            result_denom = denom1 * denom2;
            printf("The difference is ");
            break;

        case '*':
            result_num = num1 * num2;
            result_denom = denom1 * denom2;
            printf("The quotient is ");
            break;

        case '/':
            result_num = num1 * denom2;
            result_denom = denom1 * num2;
            printf("The dividend is ");
            break;

        default:
            printf("Invalid input\n");
            return 0;
    }

    printf("%d/%d\n\n", result_num, result_denom);

    return 0;
}
