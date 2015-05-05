/* Assume that the fraction structure contains two members: numerator and
 * denominator (both of type int). Write functions that perform the following
 * operations on fractions:
 *
 * (a) Reduce the fraction f to lowest terms. Hint: To reduce a fraction to
 *     lowest terms, first compute the greatest common divisor (GCD) of the
 *     numerator and denominator. Then divide both the numerator and denominator
 *     by the GCD.
 *
 * (b) Add the fractions f1 and f2.
 *
 * (c) Subtract the fraction f1 from the fraction f2.
 *
 * (d) Multiply the fractions f1 and f2.
 *
 * (e) Divide the fractions f1 by the fraction f2.
 *
 * The fractions f, f1, and f2 will be arguments of type struct fraction, each
 * function will return a value of type struct fraction. The fractions returned
 * by the functions in parts (b)-(e) should be reduced to lowest terms. Hint:
 * You may use the function from part (a)  to help write the functions in part
 * (b)-(e).
 */
struct fraction { int numerator, denominator; };

struct fraction reduce_fract(struct fraction f)
{
    struct fraction reduced;
    int remainder;

    reduced.numerator = f.numerator;
    reduced.denominator = f.denominator;

    /* find Greatest Common Denominator */
    do
    {
        remainder = f.numerator % f.denominator;
        f.numerator = f.denominator;
        f.denominator = remainder;
    } while (f.denominator != 0);

    /* divide numerator and denominator by GCD to reduce */
    reduced.numerator /= f.numerator;
    reduced.denominator /= f.numerator;

    return reduced;
}

struct fraction add_fracts(struct fraction f1, struct fraction f2)
{
    struct fraction sum;
    sum.numerator = f1.numerator * f2.denominator +
                    f2.numerator * f1.denominator;
    sum.denominator = f1.denominator * f2.denominator;
    return reduce_fract(sum);
}

struct fraction subtract_fracts(struct fraction f1, struct fraction f2)
{
    struct fraction diff;
    diff.numerator = f1.numerator * f2.denominator -
                    f2.numerator * f1.denominator;
    diff.denominator = f1.denominator * f2.denominator;
    return reduce_fract(diff);
}

struct fraction multiply_fracts(struct fraction f1, struct fraction f2)
{
    struct fraction quotient;
    quotient.numerator = f1.numerator * f2.numerator;
    quotient.denominator = f1.denominator * f2.denominator;
    return reduce_fract(quotient);
}

struct fraction divide_fracts(struct fraction f1, struct fraction f2)
{
    struct fraction dividend;
    dividend.numerator = f1.numerator * f2.denominator;
    dividend.denominator = f1.denominator * f2.numerator;
    return reduce_fract(dividend);
}
