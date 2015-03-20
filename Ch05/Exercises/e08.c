/* The follownig if statement is unnecessarily complicated.
 * Simplify it as much as possible.
 * (Hint: The entire statement can be replaced by a single assignment).
 *
 * if (age >= 13)
 *   if (age <= 19)
 *     teenager = true;
 *   else
 *     teenager = false;
 * else if (age < 13)
 *   teenager = false;
 */
#include <stdio.h>

int main(void)
{
    int age;

    printf("\nInput age: ");
    scanf("%d", &age);

    printf(age >= 13 && age <= 19 ? "Is" : "Isn't");
    printf(" a teenager.\n\n");

    return 0;
}

/* Answer:
 * age >= 13 && age <= 19 ? teenager = true : teenager = false;
 */
