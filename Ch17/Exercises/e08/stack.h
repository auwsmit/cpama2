#ifndef STACK_H
#define STACK_H

/* is_empty: Returns whether or not the stack is empty. */
bool is_empty(void);

/* push: Calls stack_overflow if the stack is too full,
 * otherwise it adds the value i to the top of the stack */
bool push(int i);

/* pop: Calls stack_underflow if the stack is empty,
 * otherwise it removes and returns the top value of the stack. */
int pop(void);

/* stack_overflow: Prints an error and exits the program */
void stack_overflow();

/* stack_underflow: Prints an error and exits the program */
void stack_underflow();

#endif
