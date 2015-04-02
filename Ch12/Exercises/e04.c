/* Rewrite the make_empty, is_empty, and is_full functions of Section 10.2 to
 * use the pointer variable top_ptr instead of the integer variable top.
 */
#include <stdbool.h>
#define STACK_SIZE 100

/* external variables */
int contents[STACK_SIZE];
int* top_ptr = 0;

void make_empty(void)
{
    *top_ptr = 0;
}

bool is_empty(void)
{
    return *top_ptr == 0;
}

bool is_full(void)
{
    return *top_ptr == STACK_SIZE;
}
