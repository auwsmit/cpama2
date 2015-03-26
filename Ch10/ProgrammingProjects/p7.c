/* Write a program that prompts the user for a number and then displays the
 * number, using characters to simulate the effect of a seven-segment display:
 *
 * Enter a number: 491-9014
 *      _       _   _
 * |_| |_|   | |_| | |   | |_|
 *   |  _|   |  _| |_|   |   |
 *
 * Characters other than digits should be ignored. Write the program so that the
 * maximum number of digits is controlled by a macro named MAX_DIGITS, which has
 * the value 10. If the number contains more than this number of digits, the
 * extra digits are ignored. Hints: Use two external arrays. One is the segments
 * array (see Exercise 6 in Chapter 8), which stores data representing the
 * correspondence between digits and segments. The other array, digits, will be
 * an array of 4 characters with 4 rows (since each segmented digit is four
 * characters high) and MAX_DIGITS * 4 columns (digits are three characters
 * wide, but a space is needed between digits for readability). Write your
 * program as four functions: main, clear_digits_array, process_digit, and
 * print_digits_array. Here are the prototypes for the latter three functions:
 *
 * void clear_digits_array(void);
 * void process_digit(int digit, int position);
 * void print_digits_array(void);
 *
 * clear_digits_array will store blank characters into all elements of the
 * digits array, process_digit will store the seven-segment representation of
 * digit into a specified position in the digits array (positions range from
 * 0 to MAX_DIGITS - 1). print_digits_array will display the rows of the digits
 * array, each on a single line, producing output such as that shown in the
 * example.
 */
#include <stdio.h>
#include <stdlib.h>

#define MAX_DIGITS 10

/*   ___
 *  | 0 |
 * 5|   |1
 *  |___|
 *  | 6 |
 * 4|   |2
 *  |___|  segments array layout
 *    3
 */
const int segments[10][7] = {{1, 1, 1, 1, 1, 1, 0},  /* 0 */
                             {0, 1, 1, 0, 0, 0, 0},  /* 1 */
                             {1, 1, 0, 1, 1, 0, 1},  /* 2 */
                             {1, 1, 1, 1, 0, 0, 1},  /* 3 */
                             {0, 1, 1, 0, 0, 1, 1},  /* 4 */
                             {1, 0, 1, 1, 0, 1, 1},  /* 5 */
                             {1, 0, 1, 1, 1, 1, 1},  /* 6 */
                             {1, 1, 1, 0, 0, 0, 0},  /* 7 */
                             {1, 1, 1, 1, 1, 1, 1},  /* 8 */
                             {1, 1, 1, 1, 0, 1, 1}}; /* 9 */
int digits[4][MAX_DIGITS * 4];

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int main(void)
{
    char input;
    int num_digits = 0;

    clear_digits_array();

    printf("\nEnter a number: ");
    while ((input = getchar()) != '\n')
    {
        if (num_digits == MAX_DIGITS) break;
        if (input >= '0' && input <= '9')
            process_digit(input - '0', num_digits++);
    }

    print_digits_array();
    return 0;
}

void clear_digits_array(void)
{
    int row, col;
    for (row = 0; row < 4; row++)
        for (col = 0; col < (MAX_DIGITS * 4); col++)
            digits[row][col] = ' ';
}

void process_digit(int digit, int position)
{
    int offset = position * 4;
    digits[0][offset + 1] = segments[digit][0] ? '_' : ' ';
    digits[1][offset]     = segments[digit][5] ? '|' : ' ';
    digits[1][offset + 1] = segments[digit][6] ? '_' : ' ';
    digits[1][offset + 2] = segments[digit][1] ? '|' : ' ';
    digits[2][offset]     = segments[digit][4] ? '|' : ' ';
    digits[2][offset + 1] = segments[digit][3] ? '_' : ' ';
    digits[2][offset + 2] = segments[digit][2] ? '|' : ' ';
}

void print_digits_array(void)
{
    int row, col;
    for (row = 0; row < 4; row++)
    {
        for (col = 0; col < (MAX_DIGITS * 4); col++)
            putchar(digits[row][col]);
        putchar('\n');
    }
}
