/* Modify Programming Project 9 from Chapter 8 so that it includes the following
 * functions:
 *
 * void generate_random_walk(char walk[10][10]);
 * void print_array(char walk[10][10]);
 *
 * main first calls generate_random_walk, which initializes the array to contain
 * '.' characters and then replaces some of these characters by the letters
 * A through Z, as described in the original project. main then calls
 * print_array to display the array on screen.
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
/* maze size */
#define MAZE 8

void generate_random_walk(char walk[MAZE][MAZE]);
void print_array(char walk[MAZE][MAZE]);

int main(void)
{
    char walk[MAZE][MAZE];

    generate_random_walk(walk);
    print_array(walk);

    return 0;
}

void generate_random_walk(char walk[MAZE][MAZE])
{
    char prev;
    int row, col, direction, i;
    bool blocked[4] = {false};

    srand((unsigned) time(NULL));

    /* Filling the blank maze array */
    for (row = 0; row < MAZE; row++)
        for (col = 0; col < MAZE; col++)
            walk[col][row] = EMPTY_CELL;

    /* Starting off the path */
    row = col = 0;
    walk[row][col] = prev = 'A';

    /* Loop to create the path */
    while (walk[row][col] != 'Z' && BLOCKED == false)
    {
        /* Get random direction */
        direction = rand() % 4;

        /* Check if direction is valid */
        if (direction == UP)
        {
            if (row - 1 >= 0 && walk[row-1][col] == EMPTY_CELL)
                row--;
            else
            {
                blocked[direction] = true;
                continue;
            }
        }
        else if (direction == RIGHT)
        {
            if (col + 1 <= 9 && walk[row][col+1] == EMPTY_CELL)
                col++;
            else
            {
                blocked[direction] = true;
                continue;
            }
        }
        else if (direction == DOWN)
        {
            if (row + 1 <= 9 && walk[row+1][col] == EMPTY_CELL)
                row++;
            else
            {
                blocked[direction] = true;
                continue;
            }
        }
        else if (direction == LEFT)
        {
            if (col - 1 >= 0 && walk[row][col-1] == EMPTY_CELL)
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
        walk[row][col] = prev = prev + 1;
        for (i = 0; i < 4; i++)
            blocked[i] = false;
    }
}

void print_array(char walk[MAZE][MAZE])
{
    int row, col;
    printf("\n");
    for (row = 0; row < MAZE; row++)
    {
        for (col = 0; col < MAZE; col++)
            printf("%c ", walk[col][row]);
        printf("\n");
    }
}
