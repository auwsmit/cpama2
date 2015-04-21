/* Modify Programming Project 6 from Chapter 10 so that it includes the
 * following function:
 *
 * int evaluate_RPN_expression(const char *expression);
 *
 * The function returns the value of the RPN expression pointed to by
 * expression.
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> /* C99 only */

#define LEN 100 /* max size of expression string */
#define STACK_SIZE 100

/* external variables */
char contents[STACK_SIZE];
int top = 0;

int evaluate_RPN_expression(const char *expression);
bool is_empty(void);
bool is_full(void);
void push(char i);
char pop(void);
void stack_overflow();
void stack_underflow();

int main(void)
{
    char expression[LEN];

    for (;;)
    {
        printf("\nEnter an expression: ");
        fgets(expression, LEN, stdin);
        printf("Value of expression: %d", evaluate_RPN_expression(expression));
    }
    return 0;
}

int evaluate_RPN_expression(const char *expression)
{
    char *digit = expression;
    int operandA, operandB;

    for (; *digit != '\n'; digit++)
    {
        switch(*digit)
        {
            case '+': case '-': case '*': case '/':
                operandA = pop();
                operandB = pop();
        }
        if (*digit >= '0' && *digit <= '9')
            push(*digit - '0');
        else if (*digit == '+')
            push(operandA + operandB);
        else if (*digit == '-')
            push(operandA - operandB);
        else if (*digit == '*')
            push(operandA * operandB);
        else if (*digit == '/')
            push(operandA / operandB);
        else if (*digit == '=')
            break;
        else if (*digit != ' ')
        {
            printf("\n");
            exit(EXIT_SUCCESS);
        }
    }
    if (top > 1)
    {
        printf("Too many operands in expression\n\n");
        exit(EXIT_FAILURE);
    }
    return pop();
}

bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void push(char i)
{
    if (is_full())
        stack_overflow();
    else
        contents[top++] = i;
}

char pop(void)
{
    if (is_empty())
        stack_underflow();
    else
        return contents[--top];
}

void stack_overflow()
{
    printf("Expression is too complex\n\n");
    exit(EXIT_FAILURE);
}

void stack_underflow()
{
    printf("Not enough operands in expression\n\n");
    exit(EXIT_FAILURE);
}
