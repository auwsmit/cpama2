/* Write a program that calculates the remaining balance on a loan after the
 * first, second, and third monthly payments.
 *
 * Display each balance with two digits after the decimal point.
 */
#include <stdio.h>

int main(void)
{
    float loan, interest, monthlyPayment;

    printf("\nEnter the amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &interest);
    printf("Enter monthly payment: ");
    scanf("%f", &monthlyPayment);

    /* interest is yearly, so this converts it to a monthly rate */
    interest = (interest * 0.01f) / 12;

    loan = (loan - monthlyPayment) + (loan * interest);
    printf("\nBalance remaining after first payment:  $%.2f", loan);
    loan = (loan - monthlyPayment) + (loan * interest);
    printf("\nBalance remaining after second payment: $%.2f", loan);
    loan = (loan - monthlyPayment) + (loan * interest);
    printf("\nBalance remaining after third payment:  $%.2f\n", loan);

    return 0;
}
