/* Write a program that prints the values of sizeof(int), sizeof(short),
 * sizeof(long), sizeof(float), sizeof(double) and sizeof(long double).
 */
#include <stdio.h>

int main(void)
{
    printf("Size of:\n");
    printf("int - %d\n", sizeof(int));
    printf("short - %d\n", sizeof(short));
    printf("long - %d\n", sizeof(long));
    printf("float - %d\n", sizeof(float));
    printf("double - %d\n", sizeof(double));
    printf("long double - %d\n", sizeof(long double));
    printf("\n");

    return 0;
}
