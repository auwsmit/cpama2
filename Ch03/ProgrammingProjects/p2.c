/* Write a program that formats product information entered by the user.
 * A session with the program should look like this: <book example>
 * The item number and date should be left justified; the unit price
 * should be right justified. Allow dollar amounts up to $9999.99.
 */
#include <stdio.h>

int main(void)
{
    int itemNum, month, day, year;
    float unitPrice;

    printf("\nEnter item number: ");
    scanf("%d", &itemNum);

    printf("Enter unit price: ");
    scanf("%f", &unitPrice);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("\nItem\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");
    printf("%d\t\t$%7.2f\t", itemNum, unitPrice);
    printf("%.2d/%.2d/%.4d\n", month, day, year);

    return 0;
}
