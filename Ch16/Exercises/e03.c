/* (a) Show how to declare a tag named complex for a structure with two members,
 *     real and imaginary, of type double.
 *
 * (b) Use the complex tag to declare variables named c1, c2, and c3.
 *
 * (c) Write a function named make_complex that stores its two arguments (both
 *     of type double) in a complex structure, then returns that structure.
 *
 * (d) Write a function named add_complex that adds the corresponding members of
 *     its arguments (both complex structures), then returns the result (another
 *     complex structure).
 */

/* Answer:
 * A: */
struct complex {
    double real, imaginary;
};

/* B: */
struct complex c1, c2, c3;

/* C: */
struct complex
make_complex(double mem1, double mem2)
{
    return (struct complex) { mem1, mem2 };
}

/* D: */
struct complex
add_complex(struct complex com1, struct complex com2)
{
    struct complex sum;
    sum.real = com1.real + com2.real;
    sum.imaginary = com1.imaginary + com2.imaginary;
    return sum;
}
