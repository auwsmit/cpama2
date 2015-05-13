/* Write a function named duplicate that uses dynamic setorage allocation to
 * create a copy of a string. For example, the call
 *
 * p = duplicate(str);
 *
 * would allocate space for a string of the same length as str, copy the
 * contents of str into the new string, and return a pointer to it. Have
 * duplicate return a null pointer if the memory allocation fails.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *duplicate(char* str);

int main(void)
{
    char *str1 = "Here's a string";
    char *str2 = duplicate(str1);

    printf("\nDuplicate: %s\n\n", str2);
    return 0;
}

char *duplicate(char* str)
{
    char *copy = malloc(sizeof(str) + 1);
    strcpy(copy, str);
    return copy;
}
