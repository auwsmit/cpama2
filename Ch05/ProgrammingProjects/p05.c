/* In one state, single residents are subject to the following income tax:
 *
 * Income           Amount of tax
 * Not over $750    1% of income
 * $750-$2,250      $7.50  plus 2% of amount over $750
 * $2,250-$3,750    $37.50  plus 2% of amount over $2,250
 * $3,750-$5,250    $82.50  plus 2% of amount over $3,750
 * $5,250-$7,000    $142.50  plus 2% of amount over $5,250
 * Over $7,000      $230.00  plus 2% of amount over $7,000
 *
 * Write a program that asks the user enter the amount of taxable income,
 * then displays the tax due.
 */
#include <stdio.h>

int main(void)
{
    float income, tax;

    printf("\nEnter amount of income: ");
    scanf("%f", &income);

    if (income < 750)
    {
        tax = income * 0.01;
    }
    else if (income >= 750 && income <= 2250)
    {
        tax = 7.50 + ((income - 750) * 0.02);
    }
    else if (income >= 2250 && income <= 3750)
    {
        tax = 37.50 + ((income - 2250) * 0.02);
    }
    else if (income >= 3750 && income <= 5250)
    {
        tax = 82.50 + ((income - 3750) * 0.02);
    }
    else if (income >= 5250 && income <= 7000)
    {
        tax = 142.50 + ((income - 5250) * 0.02);
    }
    else if (income > 7000)
    {
        tax = 230.50 + ((income - 7000) * 0.02);
    }

    printf("Tax due: $%.2f\n\n", tax);

    return 0;
}
