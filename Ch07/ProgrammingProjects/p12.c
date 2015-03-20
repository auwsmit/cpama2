/* Write a program that evaluates an expression:
 *
 * Enter an expression: 1+2.5*3
 * Value of expression: 10.5
 *
 * The operands in the expression are floating-point numbers; the operators
 * are +, -, *, and /. The expression is evaluated from left to right (no
 * operator takes precedence over any other operator).
 */
#include <stdio.h>

int main(void)
{
    float valueA, valueB, valueC;
    char operator1, operator2;

    valueA = valueB = valueC = 0;

    printf("\nEnter an expression: ");
    scanf(" %f %c %f %c %f",
            &valueA, &operator1, &valueB, &operator2, &valueC);

    switch(operator1)
    {
        case '+':
            valueA += valueB;
            break;
        case '-':
            valueA -= valueB;
            break;
        case '*':
            valueA *= valueB;
            break;
        case '/':
            valueA /= valueB;
            break;
        default:
            printf("Invalid operator\n");
            return 0;
    }

    switch(operator2)
    {
        case '+':
            valueA += valueC;
            break;
        case '-':
            valueA -= valueC;
            break;
        case '*':
            valueA *= valueC;
            break;
        case '/':
            valueA /= valueC;
            break;
        default:
            printf("Invalid operator\n");
            return 0;
    }

    printf("Value of an expression: %.1f\n\n", valueA);

    return 0;
}
