/* Let GENERIC_MAX be the following macro:
 *
 * #define GENERIC_MAX(type)        \
 * type type##_max(type x, type y)  \
 * {                                \
 *   return x > y ? x : y;          \
 * }
 *
 * (a) Show the preprocessor's expansion of GENERIC_MAX(long).
 * (b) Explain why GENERIC_MAX doesn't work for basic types such as unsigned long.
 * (c) Describe a technique that would allow us to use GENERIC_MAX with basic
 *     types such as unsigned long. Hint don't change the definition of GENERIC_MAX.
 */

// Answer:
// A - GENERIC_MAX(long) expands into */
long typelong_max(long x, long y)
{
    return x > y ? x : y;
}
// B - It doesn't work because the function name would have a space. For
//     example, GENERIC_MAX(unsigned long) would expand into
unsigned long typeunsigned long_max(unsigned long x, unsigned long y)
{
    return x > y ? x : y;
}
//
// C - Use a typedef to change basic types like unsigned long into a single word
//     type. For example,
typedef unsigned long ULONG;
// now GENERIC_MAX can be called as GENERIC_MAX(ULONG) and work fine.
