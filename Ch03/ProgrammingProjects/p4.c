/* Write a program that prompts the user to enter a telephone number
 * in the form (xxx) xxx-xxxx and then displays the number
 * in the form xxx.xxx.xxx
 */
#include <stdio.h>

int main(void)
{
    int n1, n2, n3;

    printf("\nEnter phone number (xxx) xxx-xxxx: ");
    scanf("(%d) %d-%d", &n1, &n2, &n3);

    printf("You entered %d.%d.%d\n\n", n1, n2, n3);

    return 0;
}
