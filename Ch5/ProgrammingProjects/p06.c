/* Modify the upc.c program of Section 4.1 so that it checks whether a UPC is
 * valid. After the user enters a UPC, the program will display either VALID or
 * NOT VALID.
 */
#include <stdio.h>

int main(void)
{
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5,
        first_sum, second_sum, total, check;

    printf("\nEnter the first (single) digit: ");
    scanf("%1d", &d);
    printf("Enter the first group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
    printf("Enter the second group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
    printf("Enter the last (single) digit: ");
    scanf("%1d", &check);

    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = 3 * first_sum + second_sum;

    if (check == 9 - ((total - 1) % 10))
        printf("VALID\n\n");
    else
        printf("NOT VALID\n\n");

    return 0;
}
