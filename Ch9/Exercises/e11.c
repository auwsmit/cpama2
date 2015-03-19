/* Write the following function:
 *
 * float compute_GPA(char_grades[], int n);
 *
 * The grades array will contain letter grades (A, B, C, D, or F, either
 * upper-case or lower-case); n is the length of the array. The function should
 * return the average of the grades (assume that A = 4, B = 3, C = 2, D = 1, and
 * F = 0).
 */
#include <stdio.h>
#include <ctype.h>

#define LEN ((int)(sizeof(grades) / sizeof(grades[0])))

float compute_GPA(char grades[], int n);

int main(void)
{
    char grades[] = { 'A', 'F', 'A', 'A', 'A', 'A' };
    printf("\nGPA: %.2f\n\n", compute_GPA(grades, LEN));

    return 0;
}

float compute_GPA(char grades[], int n)
{
    int i;
    float average = 0;

    for (i = 0; i < n; i++)
    {
        switch(toupper(grades[i]))
        {
            case 'A':
                average += 4;
                break;
            case 'B':
                average += 3;
                break;
            case 'C':
                average += 2;
                break;
            case 'D':
                average++;
                break;
        }
    }

    return average / n;
}
