/* Write a program that asks the user to enter a dollars-and-cents amount, then
 * displays the amount with 5% tax added
 */
#include <stdio.h>

int main(void)
{
	float money;

	printf("Enter an amount: ");
	scanf("%f", &money);

	money = money + (money * 0.05f);

	printf("With tax added: $%.2f", money);

	return 0;
}
