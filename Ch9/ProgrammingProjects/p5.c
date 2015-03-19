/* Modify Programming Project 17 from Chapter 8 so that it includes the following functions:
 *
 * void create_magic_square(int n, char magic_square[n][n]);
 * void print_magic_square(int n, char magic_square[n][n]);
 *
 * After obtaining the number n from the user, main will call
 * create_magic_square, passing it an n x n array that is declared inside main.
 * create_magic_square will find the array with the numbers 1, 2, ..., n^2 as
 * described in the original project. main will then call print_magic_square,
 * which will display the array in the format described in the original project.
 * Note: If your compiler doesn't support variable-length arrays, declare the
 * array in main to be 99 x 99 instead of n x n and use the following prototypes
 * instead:
 *
 * void create_magic_square(int n, char magic_square[99][99]);
 * void print_magic_square(int n, char magic_square[99][99]);
 */
#include <stdio.h>

void create_magic_square(int n, char magic_square[n][n]);
void print_magic_square(int n, char magic_square[n][n]);

int main(void)
{
    int size;

    printf("\nThis program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    scanf("%d", &size);

    if (size < 1 || size > 99 || size % 2 == 0)
    {
        printf("Invalid size.\n\n");
        return 0;
    }

    char magic_square[size][size];

    create_magic_square(size, magic_square);
    print_magic_square(size, magic_square);
    printf("\n");

    return 0;
}

void create_magic_square(int n, char magic_square[n][n])
{
    int row, col, prev_row, prev_col, i;

    for (row = 0; row < n; row++)
        for (col = 0; col < n; col++)
            magic_square[row][col] = 0;

    row = 0;
    col = n / 2;
    for (i = 0; i < n * n; i++)
    {
        magic_square[row][col] = i + 1;

        prev_row = row;
        prev_col = col;
        if (row - 1 < 0)
            row = n - 1;
        else
            row--;
        if (col + 1 > n - 1)
            col = 0;
        else
            col++;

        if (magic_square[row][col] != 0)
        {
            row = prev_row + 1;
            col = prev_col;
        }
    }
}

void print_magic_square(int n, char magic_square[n][n])
{
    int row, col;
    for (row = 0; row < n; row++)
    {
        for (col = 0; col < n; col++)
        {
            printf("%5d", magic_square[row][col]);
        }
        printf("\n");
    }
}
