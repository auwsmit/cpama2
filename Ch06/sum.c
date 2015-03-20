/* Sums a series of numbers */

#include <stdio.h>

int main(void)
{
    int n, sum = 0;

    printf("This program sums a series of integers.\n");
    printf("Enter integers (0 to terminate): ");

    scanf("%d", &n);
    while (n != 0)
    {
        sum += n;
        scanf("%d", &n);
    }
    printf("The sum is %d\n", sum);

    return  0;
}
