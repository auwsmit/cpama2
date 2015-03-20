/* The following function, which computes the area of a triangle, contains two
 * errors. Locate the errors and show how to fix them. (Hint: There are no
 * errors in the formula.)
 *
 * double triangle_area(double base, height)
 * double product;
 * {
 *   product = base * height;
 *   return product / 2;
 * }
 */
double triangle_area(double base, double height)
{
  double product;
  product = base * height;
  return product / 2;
}

/* Answer:
 * Error 1 - The height parameter was missing its datatype.
 * Error 2 - The variable product was defined outside of the function's block.
 */
