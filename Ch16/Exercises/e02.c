/* (a) Declare structure variables named c1, c2, and c3, each having members
 * real and imaginary of type double.
 *
 * (b) Modify the declarations in part (a) so that c1's members initially have
 * the values 0.0 and 1.0 while c2's members are 1.0 and 0.0 initially. (c3 is
 * not initialized.)
 *
 * (c) Write statements that copy the members of c2 into c1. Can this be done in
 * one statement, or does it require 2?
 *
 * (d) Write statements that add the corresponding members of c1 and c2, storing
 * the result in c3.
 */

/* Answer:
 * A: */
struct {
    double real, imaginary;
} c1, c2, c3;

/* B: */
struct {
    double real, imaginary;
} c1 = { 0.0, 1.0 }, c2 = { 1.0, 0.0 }, c3;

/* C: */
c1 = c2;

/* D: */
c3.real = c1.real + c2.real;
c3.imaginary = c1.imaginary + c2.imaginary;
