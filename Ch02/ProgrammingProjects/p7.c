/* Write a program that asks the user to enter a U.S. dollar amount
 * and then shows how to pay that amount using the smallest number of
 * $20, $10, $5, and $1 dollar bills
 */
#include <stdio.h>

int main(void)
{
    int dollars, twenties, tens, fives;

    printf("\nEnter a dollar amount: ");
    scanf("%d", &dollars);

    twenties = dollars / 20;
    dollars  = dollars - (twenties * 20);
    tens     = dollars / 10;
    dollars  = dollars - (tens * 10);
    fives    = dollars / 5;
    dollars  = dollars - (fives * 5);
    /* dollars contains the remaining singles at this point */

    printf("\n$20 bills: %d", twenties);
    printf("\n$10 bills: %d", tens);
    printf("\n $5 bills: %d", fives);
    printf("\n $1 bills: %d\n\n", dollars);

    return 0;
}
