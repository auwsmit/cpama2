/* Write a program that simulates the game of craps, which is played with two
 * dice. On the first roll, the player wins if the sum of the dice is 7 or 11.
 * The player loses if the sum is 2, 3, or 12. Any other roll is called the
 * "point" and the game continues. On each subsequent roll, the player wins if
 * he or she rolls the point again. The player loses by rolling 7. Any other
 * roll is ignored and the game continues. At the end of each game, the program
 * will ask the user whether or not to play again. When the user enters
 * a response other than y or Y, the program will display the number of wins and
 * losses then terminate.
 *
 * You rolled: 8
 * Your point is 8
 * You rolled: 3
 * You rolled: 10
 * You rolled: 8
 * You win!
 *
 * Play again? y
 *
 * You rolled: 6
 * Your point is 6
 * You rolled: 5
 * You rolled: 12
 * You rolled: 3
 * You rolled: 7
 * You lose!
 *
 * Play again? y
 *
 * You rolled: 11
 * You win!
 *
 * Play again? n
 *
 * Wins: 2  Losses: 1
 *
 * Write your program as three functions: main, roll_dice, and play_game. Here
 * are the prototypes for the latter two functions:
 *
 * int roll_dice(void);
 * bool play_game(void);
 *
 * roll_dice should generate two random numbers, each between 1 and 6, and
 * return their sum. play_game should play one craps game (calling roll_dice to
 * determine the outcome of each dice roll); it will return true if the player
 * wins and false if the player loses. play_game is also responsible for
 * displaying messages showing the results of the player's dice rolls. main will
 * call play_game repeatedly, keeping track of the number of wins and losses and
 * displaying the "you win" and "you lose" messages. Hint: Use the rand function
 * to generate random numbers. See the deal.c program in Section 8.2 for an
 * example of how to call rand and the related srand function.
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <ctype.h>

int roll_dice(void);
bool play_game(void);

int main(void)
{
    char again;
    int wins, losses;
    wins = losses = 0;

    printf("\nTo simulate a game of craps, press Enter (Return).\n");
    do
    {
        srand((unsigned) time(NULL));
        again = 0;

        if (play_game() == true)
            wins++;
        else
            losses++;

        for (;;)
        {
            printf("\nPlay again? ");
            if (again != 0) printf("(y/n) ");
            again = toupper(getchar());

            if (again == 'Y' || again == 'N')
            {
                printf("\n");
                break;
            }
        }
    } while (toupper(again) == 'Y');

    printf("Wins: %d  Losses: %d\n\n", wins, losses);

    return 0;
}

int roll_dice(void)
{
    int roll1, roll2;

    roll1 = rand() % 6 + 1;
    roll2 = rand() % 6 + 1;

    return roll1 + roll2;
}

bool play_game(void)
{
    int roll, point;
    point = 0;

    for (;;)
    {
        while (getchar() != '\n');
        roll = roll_dice();

        printf("You rolled: %d", roll);

        if (point == 0)
        {
            if (roll == 7 || roll == 11)
            {
                printf("\nYou win!\n");
                return true;
            }
            else if (roll == 2 || roll == 3 || roll == 12)
            {
                printf("\nYou lose!\n");
                return false;
            }
            else
            {
                point = roll;
                printf("\nYour point is %d", point);
                continue;
            }
        }
        else if (roll == point)
        {
            printf("\nYou win!\n");
            return true;
        }
        else if (roll == 7)
        {
            printf("\nYou lose!\n");
            return false;
        }
        else continue;
    }
}
