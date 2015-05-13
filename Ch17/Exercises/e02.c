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
