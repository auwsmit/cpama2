/* Modify Programming Project 5 from Chapter 5 so that it uses a function to
 * compute the amount of income tax. When passed an amount of taxable income,
 * the function will return the tax due.
 */
#include <stdio.h>

float compute_income_tax(float income);

int main(void)
{
    float income;

    printf("\nEnter amount of income: ");
    scanf("%f", &income);

    printf("Tax due: $%.2f\n\n", compute_income_tax(income));

    return 0;
}

float compute_income_tax(float income)
{
    float tax;

    if (income < 750)
        tax = income * 0.01;
    else if (income >= 750 && income <= 2250)
        tax = 7.50 + ((income - 750) * 0.02);
    else if (income >= 2250 && income <= 3750)
        tax = 37.50 + ((income - 2250) * 0.02);
    else if (income >= 3750 && income <= 5250)
        tax = 82.50 + ((income - 3750) * 0.02);
    else if (income >= 5250 && income <= 7000)
        tax = 142.50 + ((income - 5250) * 0.02);
    else if (income > 7000)
        tax = 230.50 + ((income - 7000) * 0.02);

    return tax;
}
