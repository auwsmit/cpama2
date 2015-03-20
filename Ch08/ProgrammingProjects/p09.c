/* Write a program that generates a "random walk" across a 10 x 10 array. The
 * array will contain characters (all EMPTY_CELL initially). The program must
 * randomly "walk" from element to element, always going up, down, left, or
 * right by one element. The elements visited by the program will be labeled
 * with the letters A through Z, in the order visited. Here's an example of the
 * desired output:
 *
 * A . . . . . . . . .
 * B C D . . . . . . .
 * . F E . . . . . . .
 * H G . . . . . . . .
 * I . . . . . . . . .
 * J . . . . . . . Z .
 * K . . R S T U V Y .
 * L M P Q . . . W X .
 * . N O . . . . . . .
 * . . . . . . . . . .
 *
 * Hint: Use the srand and rand functions (see deal.c) to generate random
 * numbers. After generating a number, look at its remainder when divided by 4.
 * There are 4 possible values for the remainder--0, 1, 2, and 3--indicating
 * the direction of the next move. Before performing a move, check that (a) it
 * won't go outside the array, and (b) it doesn't take us to an element that
 * already has a letter assigned. If either condition is voilated, try moving
 * in another direction. If all four directions are blocked, the program must
 * terminate. Here's an example of premature termination:
 *
 * A B G H I . . . . .
 * . C F . J K . . . .
 * . D E . M L . . . .
 * . . . . N O . . . .
 * . . W X Y P Q . . .
 * . . V U T S R . . .
 * . . . . . . . . . .
 * . . . . . . . . . .
 * . . . . . . . . . .
 * . . . . . . . . . .
 *
 * Y is blocked on all four sides, so there's no place to put Z.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define EMPTY_CELL '.'
#define BLOCKED (blocked[0] == true && blocked[1] == true && blocked[2] == true && blocked[3] == true)
#define UP 0
#define RIGHT 1
#define DOWN 2
#define LEFT 3

int main(void)
{
    char maze[10][10], prev;
    int row, col, direction, i;
    bool blocked[4] = {false};

    srand((unsigned) time(NULL));

    /* Filling the blank maze array */
    for (row = 0; row < 10; row++)
        for (col = 0; col < 10; col++)
            maze[col][row] = EMPTY_CELL;

    /* Starting off the path */
    row = col = 0;
    maze[row][col] = prev = 'A';

    /* Loop to create the path */
    while (maze[row][col] != 'Z' && BLOCKED == false)
    {
        /* Get random direction */
        direction = rand() % 4;

        /* Check if direction is valid */
        if (direction == UP)
        {
            if (row - 1 >= 0 && maze[row-1][col] == EMPTY_CELL)
                row--;
            else
            {
                blocked[direction] = true;
                continue;
            }
        }
        else if (direction == RIGHT)
        {
            if (col + 1 <= 9 && maze[row][col+1] == EMPTY_CELL)
                col++;
            else
            {
                blocked[direction] = true;
                continue;
            }
        }
        else if (direction == DOWN)
        {
            if (row + 1 <= 9 && maze[row+1][col] == EMPTY_CELL)
                row++;
            else
            {
                blocked[direction] = true;
                continue;
            }
        }
        else if (direction == LEFT)
        {
            if (col - 1 >= 0 && maze[row][col-1] == EMPTY_CELL)
                col--;
            else
            {
                blocked[direction] = true;
                continue;
            }
        }

        /* Direction is valid, set the next character
         * and clear the blocked check
         */
        maze[row][col] = prev = prev + 1;
        for (i = 0; i < 4; i++)
            blocked[i] = false;
    }

    /* Print the maze */
    printf("\n");
    for (row = 0; row < 10; row++)
    {
        for (col = 0; col < 10; col++)
            printf("%c ", maze[col][row]);
        printf("\n");
    }
    printf("\n");

    return 0;
}
