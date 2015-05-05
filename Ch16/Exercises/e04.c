/* Repeat exercise 3, but this time using a type named Complex */

/* Answer:
 * A: */
typedef struct {
    double real, imaginary;
} Complex;

/* B: */
Complex c1, c2, c3;

/* C: */
Complex
make_complex(double mem1, double mem2)
{
    return (Complex) { mem1, mem2 };
}

/* D: */
Complex
add_complex(Complex com1, Complex com2)
{
    Complex sum;
    sum.real = com1.real + com2.real;
    sum.imaginary = com1.imaginary + com2.imaginary;
    return sum;
}
