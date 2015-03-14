/* Are the following if statements equivalent? If not, why not?
 * 
 * if (score >= 90)        if (score < 60)
 *   printf("A");            printf("F");
 * else if (score >= 80)   else if (score < 70)
 *   printf("B");            printf("D");
 * else if (score >= 70)   else if (score < 80)
 *   printf("C");            printf("C");
 * else if (score >= 60)   else if (score < 90)
 *   printf("D");            printf("B");
 * else                    else
 *   printf("F");            printf("A");
 */
#include <stdio.h>

int main(void)
{
    int score;

    printf("\nInput score (0-100): ");
    scanf("%d", &score);

    if (score >= 90)
        printf("A");
    else if (score >= 80)
        printf("B");
    else if (score >= 70)
        printf("C");
    else if (score >= 60)
        printf("D");
    else
        printf("F");

    if (score < 60)
        printf("F");
    else if (score < 70)
        printf("D");
    else if (score < 80)
        printf("C");
    else if (score < 90)
        printf("B");
    else
        printf("A");

    printf("\n\n");

    return 0;
}

/* Answer:
 * Yeah, they're equivalent.
 */
