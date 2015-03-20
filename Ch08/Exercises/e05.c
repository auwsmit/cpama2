/* The Fibonacci numbers are 0, 1, 1, 2, 3, 5, 8, 13, ..., where each number is
 * the sum of the two preceding numbers. Write a program fragment that declares
 * an array named fib_numbers of length 40 and fills the array with the first
 * 40 Fibonacci numbers, Hint: Fill in the first two numbers individually, then
 * use a loop to compute the remaining numbers.
 */

/* Answer: */
int fib_numbers[40] = { 0, 1 }, i;

for (i = 2; i < 40; i++)
    fib_numbers[i] = fib_numbers[i-2] + fib_numbers[i-1];
