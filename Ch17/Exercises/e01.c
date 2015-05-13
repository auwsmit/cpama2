/* Having to check to return the value of malloc (or any other memory allocation
 * function) each time we call it can be an annoyance. Write a function named
 * my_malloc that serves as a "wrapper" for malloc. When we call my_malloc and
 * ask it to allocate n bytes, it in turn calls malloc, tests to make sure that
 * malloc doesn't return a null pointer, and then returns the pointer from
 * malloc. Have my_malloc print an error message and terminate the program if
 * malloc returns a null pointer.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *my_malloc(size_t size);

int main(void)
{
    int alloc_size = 1;

    /* allocate too much memory on purpose */
    for (;;)
    {
        char *stuff = my_malloc(alloc_size);
        alloc_size *= 2;
        stuff = NULL;
    }

    return 0;
}

void *my_malloc(size_t size)
{
    void *ret = malloc(size);
    if (ret == NULL)
    {
        printf("Memory allocation error.\n");
        exit(EXIT_FAILURE);
    }
    return ret;
}
