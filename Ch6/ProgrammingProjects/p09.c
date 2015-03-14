/* Programming Project 8 in Chapter 2 asked you to write a program that
 * calculates the remaining balance on a loan after the first, second,
 * and third monthly payments. Modify the program so that it also asks
 * the user to enter the number of payments and then displays the
 * balance after each of these payments.
 */
#include <stdio.h>

int main(void)
{
    float loan, interest, monthlyPayment;
    int payments, i;

    printf("\nEnter the amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &interest);
    printf("Enter monthly payment: ");
    scanf("%f", &monthlyPayment);
    printf("Enter number of payments: ");
    scanf("%d", &payments);

    /* interest is yearly, so this converts it to a monthly rate */
    interest = (interest * 0.01f) / 12;

    for (i = 1; i <= payments; i++)
    {
        loan = (loan - monthlyPayment) + (loan * interest);
        printf("\nBalance remaining after %d", i);

        if (i == 11 || i == 12 || i == 13)
            printf("th");
        else if (i % 10 == 1) 
            printf("st");
        else if (i % 10 == 2) 
            printf("nd");
        else if (i % 10 == 3) 
            printf("rd");
        else 
            printf("th");

        printf(" payment:  $%.2f", loan);
    }
    
    printf("\n\n");

    return 0;
}
