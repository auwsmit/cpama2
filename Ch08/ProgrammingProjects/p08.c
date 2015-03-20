/* Modify Programming Project 7 so that it prompts for five quiz grades for
 * each of five students, then computes the total score and average score for
 * each student, and the average score, high score, and low score for each
 * quiz.
 */
#include <stdio.h>

int main(void)
{
    int i, j, total, high, low, g[5][5];
    float average;

    printf("\n");
    for (i = 0; i < 5; i++)
    {
        printf("Enter 5 quiz grades for student %d: ", i + 1);
        scanf("%d %d %d %d %d",
                &g[i][0], &g[i][1], &g[i][2], &g[i][3], &g[i][4]);
    }

    printf("\n");
    for (i = 0; i < 5; i++)
    {
        total = g[i][0] + g[i][1] + g[i][2] + g[i][3] + g[i][4];
        average = total / 5;
        printf("Student %d scores: total %d | average %.1f\n",
                i + 1, total, average);
    }

    printf("\n");
    for (i = 0; i < 5; i++)
    {
        high = g[0][i];
        low = g[0][i];
        for (j = 1; j < 5; j++)
        {
            if (g[j][i] > high) high = g[j][i];
            if (g[j][i] < low) low = g[j][i];
        }

        average = (g[0][i] + g[1][i] + g[2][i] + g[3][i] + g[4][i]) / 5.0f;
        printf("Quiz %d scores: average %.1f | high %d | low %d\n",
                i + 1, average, high, low);
    }
    printf("\n");

    return 0;
}
