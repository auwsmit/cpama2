/* Create and run Kernigham and Ritchie's famous "hello, world" program:
 * Do you get a warning message from the compiler?
 * If so, what's needed to make it go away?
 */
#include <stdio.h>

int main(void)
{
    printf("hello, world\n");
}

/* Answer:
 * Error with -std=c89: In main, control reaches the end of a non-void function
 * No error in c99, even with all the error flags
 *
 * Fixed by returning a value at the end of main:
 * return 0;
 */
