/* (a) Write a function named capitalize that capitalizes all letters in its
 * argument. The argument will be a null-terminate string containing arbitrary
 * characters, not just letters. Use array subscripting to access the characters
 * in the string. Hint: Use the toupper function to convert each character to
 * upper-case.
 *
 * (b) Rewrite the capitalize function, this time only using pointer arithmetic
 * to access the characters in the string.
 */
#include <ctype.h>

/* array subscripting */
void capitalizeA(char* text)
{
    int i = 0;
    for (;text[i] != '\0'; i++)
        text[i] = toupper(text[i]);
}

/* pointer arithmetic */
void capitalizeB(char* text)
{
    while (*text != '\0')
        *text++ = toupper(*text);
}
