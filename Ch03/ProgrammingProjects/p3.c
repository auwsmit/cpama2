/* Write a program that breaks down an ISBN entered by the user. */

#include <stdio.h>

int main(void)
{
    int prefix, identifier, publisher, itemNum, check;

    printf("\nEnter ISBN: ");
    scanf("%d-%d-%d-%d-%d",
          &prefix, &identifier, &publisher, &itemNum, &check);

    printf("GS1 prefix: %d\n", prefix);
    printf("Group identifier: %d\n", identifier);
    printf("Publisher code: %d\n", publisher);
    printf("Item number: %d\n", itemNum);
    printf("Check digit: %d\n\n", check);

    return 0;
}
