/* Write a program that reads an integer entered by the user and displays it in
 * octal (base 8):
 *
 * Enter a number between 0 and 32767: 1953
 * In octal, your number is: 03641
 *
 * The output should be displayed using 5 digits, even if fewer digits are
 * sufficient. Hint: To convert the number to octal, first divide it by 8;
 * the remainder is the last digit of the octal number (1, in this case).
 * Then divide the original number by 8 and repeat the process to arrive at the
 * next-to-last digit. (printf is capable of displaying numbers, as we'll see
 * in Chapter 7, so there's actually an easier way to write this program.)
 */
#include <stdio.h>

int main(void)
{
    int decimal, oct1, oct2, oct3, oct4, oct5;

    printf("\nEnter a number between 0 and 32767: ");
    scanf("%d", &decimal);

    oct5 = decimal % 8;
    decimal /= 8;
    oct4 = decimal % 8;
    decimal /= 8;
    oct3 = decimal % 8;
    decimal /= 8;
    oct2 = decimal % 8;
    decimal /= 8;
    oct1 = decimal % 8;

    printf("In octal, your number is %d%d%d%d%d\n\n", oct1, oct2, oct3,
           oct4, oct5);

    return 0;
}
