/* Write a program that asks the user to enter numbers from 1 to 16
 * (in any order) and then displays the numbers in a 4 by 4 arrangement,
 * followed by the sums of the rows, columns, and diagonals
 */
#include <stdio.h>

int main(void)
{
    /* Turns out arrays aren't a very pretty solution for this.
     * I was gonna change them to single variables,
     * but it was too much work... so we get this beauty:
     */
    int n[16], rows[4], cols[4], diags[2];

    printf("\nEnter the numbers from 1 to 16 in any order: ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
            &n[0], &n[1], &n[2], &n[3], &n[4], &n[5],
            &n[6], &n[7], &n[8], &n[9], &n[10], &n[11],
            &n[12], &n[13], &n[14], &n[15]);

    printf("\n%3d %2d %2d %2d\n", n[0],  n[1],  n[2],  n[3]);
    printf(  "%3d %2d %2d %2d\n", n[4],  n[5],  n[6],  n[7]);
    printf(  "%3d %2d %2d %2d\n", n[8],  n[9],  n[10], n[11]);
    printf(  "%3d %2d %2d %2d\n", n[12], n[13], n[14], n[15]);

    rows[0] = n[0] + n[1] + n[2] + n[3];
    rows[1] = n[4] + n[5] + n[6] + n[7];
    rows[2] = n[8] + n[9] + n[10] + n[11];
    rows[3] = n[12] + n[13] + n[14] + n[15];

    cols[0] = n[0] + n[4] + n[8] + n[12];
    cols[1] = n[1] + n[5] + n[9] + n[13];
    cols[2] = n[2] + n[6] + n[10] + n[14];
    cols[3] = n[3] + n[7] + n[11] + n[15];

    diags[0] = n[0] + n[5] + n[10] + n[15];
    diags[1] = n[12] + n[9] + n[6] + n[3];

    printf("\nRow sums: %d %d %d %d\n", rows[0], rows[1], rows[2], rows[3]);
    printf("Column sums: %d %d %d %d\n", cols[0], cols[1], cols[2], cols[3]);
    printf("Diagonal sums: %d %d\n\n", diags[0], diags[1]);

    return 0;
}
