/* Write a program that prints an n x n magic square (a square arrangement of
 * the numbers 1, 2, ..., n^2 in which the sums of the rows, columns, and
 * diagonals are all the same). The user will specify the value of n:
 *
 * This program creates a magic square of a specified size.
 * The size must be an odd number between 1 and 99.
 * Enter size of magic square: 5
 *    17   24    1    8   15
 *    23    5    7   14   16
 *     4    6   13   20   22
 *    10   12   19   21    3
 *    11   18   25    2    9
 *
 * Store the magic square in a two-dimensional array. Start by placing the
 * number 1 in the middle of row 0. Place each of the remaining numbers 2, 3,
 * ..., n^2 by moving up one row and over one column. Any attempt to go outside
 * the bounds of the array should "wrap around" to the opposite side of the
 * array. For example, instead of storing the next number in row -1, we would
 * store it in row n - 1 (the last row). Instead of storing the next number in
 * column n,  we would store in column 0. If a particular array element is
 * already occupied, put the number directly below the previously stored number.
 * If your compiler supports variable-length arrays, declare the array to have
 * n rows and n columns. If not, declare the array to have 99 rows and 99
 * columns.
 */
#include <stdio.h>

int main(void)
{
    int size, row, col, prev_row, prev_col, i;

    printf("\nThis program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    scanf("%d", &size);

    if (size < 1 || size > 99 || size % 2 == 0)
    {
        printf("Invalid size.\n\n");
        return 0;
    }

    int magic_square[size][size];
    for (row = 0; row < size; row++)
        for (col = 0; col < size; col++)
            magic_square[row][col] = 0;

    row = 0;
    col = size / 2;
    for (i = 0; i < size * size; i++)
    {
        magic_square[row][col] = i + 1;

        prev_row = row;
        prev_col = col;
        if (row - 1 < 0)
        {
            row = size - 1;
        }
        else
        {
            row--;
        }
        if (col + 1 > size - 1)
        {
            col = 0;
        }
        else
        {
            col++;
        }

        if (magic_square[row][col] != 0)
        {
            row = prev_row + 1;
            col = prev_col;
        }
    }

    for (row = 0; row < size; row++)
    {
        for (col = 0; col < size; col++)
        {
            printf("%5d", magic_square[row][col]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}
