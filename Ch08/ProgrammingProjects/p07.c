/* Write a program that reads a 5 x 5 array of integers and then prints the row
 * sums and the column sums:
 *
 * Enter row 1: 8 3 9 0 10
 * Enter row 2: 3 5 17 1 1
 * Enter row 3: 2 8 6 23 1
 * Enter row 4: 15 7 3 2 9
 * Enter row 5: 6 14 2 6 0
 *
 * Row totals: 30 27 40 36 28
 * Column totals: 34 37 37 32 21
 */
#include <stdio.h>

int main(void)
{
    int i, n[5][5];

    printf("\n");
    for (i = 0; i < 5; i++)
    {
        printf("Enter row %d: ", i + 1);
        scanf("%d %d %d %d %d",
                &n[i][0], &n[i][1], &n[i][2], &n[i][3], &n[i][4]);
    }

    printf("\nRow totals: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ",
                n[i][0] + n[i][1] + n[i][2] + n[i][3] + n[i][4]);
    }

    printf("\nColumn totals: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ",
                n[0][i] + n[1][i] + n[2][i] + n[3][i] + n[4][i]);
    }
    printf("\n\n");

    return 0;
}
