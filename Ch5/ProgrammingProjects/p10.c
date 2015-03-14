/* Using the switch statement, write a program that converts a numerical
 * grade into a letter grade:
 *
 * Enter a numerical grade: 84
 * Letter grade: B
 *
 * Use the following grading scale: A = 90-100, B = 80-89, C = 70-79,
 * D = 60-69, F = 0-59. Print an error message if the grade is larger than 100
 * or less than 0. Hint: Break the grade into two digits, then use a switch
 * statement to test the tens digit.
 */
#include <stdio.h>

int main(void)
{
    int grade;

    printf("\nEnter a numerical grade: ");
    scanf("%d", &grade);

    if (grade < 0 || grade > 100)
    {
        printf("No grades above 100 or below 0.\n");
        return 0;
    }

    switch (grade / 10)
    {
        case 10:
        case 9:
            printf("Letter grade: A");
            break;
        case 8:
            printf("Letter grade: B");
            break;
        case 7:
            printf("Letter grade: C");
            break;
        case 6:
            printf("Letter grade: D");
            break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            printf("Letter grade: F");
            break;
        default:
            printf("Error: No grades above 100 or below 0.");
    }

    printf("\n\n");

    return 0;
}
