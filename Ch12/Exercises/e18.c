/* Write the evaluate_position function described in Exercise 13 of Chapter 9.
 * Use pointer arithmetic--not subscripting--to visit array elements. Use
 * a single loop instead of nested loops.
 */
int evaluate_position(char board[8][8])
{
    char *p;
    int white = 0, black = 0;

    for (p = &board[0][0]; p < &board[0][0] + 8 * 8; p++)
    {
        switch(*p)
        {
            case 'Q':
                white += 9;
                break;
            case 'R':
                white += 5;
                break;
            case 'B': case 'N':
                white += 3;
                break;
            case 'P':
                white += 1;
                break;
            case 'q':
                black += 9;
                break;
            case 'r':
                black += 5;
                break;
            case 'b': case 'n':
                black += 3;
                break;
            case 'p':
                black += 1;
                break;
        }
    }

    return white - black;
}
