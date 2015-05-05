/* Write the following functions. (The color structure is defined in Exercise 8.)
 *
 * (a) struct color make_color(int red, int green, int blue);
 * Returns a color structure containing the specified red, green, and blue
 * values. If any argument is less than zero, the corresponding member of the
 * structure will contain zero instead. If any argument is greater than 255, the
 * corresponding member of the structure will contain 255.
 *
 * (b) int getRed(struct color c);
 * Returns the value of c's red member.
 *
 * (c) bool equal_color(struct color color1, struct color color2);
 * Returns true if the corresponding members of color1 and color2 are equal.
 *
 * (d) struct color brighter(struct color c);
 * Returns a color structure that represents a brighter version of the color c.
 * The structure is identical to c, except that each member has been divided by
 * 0.7 (with the result truncated to an integer). However, there are three
 * special cases; (1) If all members of c are zero, the function returns a color
 * whose members all have the value 3. (2) If any member of c is greater than
 * 0 but  less than 3, it is replaced by 3 before the division by 0.7. (3) If
 * dividing by 0.7 causes a member to exceed 255, it is reduced to 255.
 *
 * (e) struct color darker(struct color c);
 * Returns a color structure that represents a darker version of the color c.
 * The structure is identical to c, except that each member has been multiplied
 * by 0.7 (with the result truncated to an integer).
 */
typedef enum {false, true} bool;

struct color { int red, green, blue; };

/* Answer:
 * A: */
struct color make_color(int red, int green, int blue)
{
    struct color c = { red, green, blue };
    c.red   = red   < 0 ? 0 : red   > 255 ? 255 : red;
    c.green = green < 0 ? 0 : green > 255 ? 255 : green;
    c.blue  = blue  < 0 ? 0 : blue  > 255 ? 255 : blue;
}

/* B: */
int getRed(struct color c)
{
    return c.red;
}

/* C: */
bool equal_color(struct color color1, struct color color2)
{
    if (color1.red   == color2.red   &&
        color1.green == color2.green &&
        color1.blue  == color2.blue)
        return true;
    else return false;
}

/* D: */
struct color brighter(struct color c)
{
    if (c.red == 0 && c.green == 0 && c.blue == 0)
        return (struct color) { 3, 3, 3 };

    if (c.red   > 0 && c.red   < 3) c.red   = 3;
    if (c.green > 0 && c.green < 3) c.green = 3;
    if (c.blue  > 0 && c.blue  < 3) c.blue  = 3;

    c.red   /= 0.7;
    c.green /= 0.7;
    c.blue  /= 0.7;

    if (c.red   > 255) c.red   = 255;
    if (c.green > 255) c.green = 255;
    if (c.blue  > 255) c.blue  = 255;

    return c;
}

/* E: */
struct color darker(struct color c)
{
    if (c.red == 0 && c.green == 0 && c.blue == 0)
        return (struct color) { 3, 3, 3 };

    if (c.red   > 0 && c.red   < 3) c.red   = 3;
    if (c.green > 0 && c.green < 3) c.green = 3;
    if (c.blue  > 0 && c.blue  < 3) c.blue  = 3;

    c.red   *= 0.7;
    c.green *= 0.7;
    c.blue  *= 0.7;

    if (c.red   > 255) c.red   = 255;
    if (c.green > 255) c.green = 255;
    if (c.blue  > 255) c.blue  = 255;

    return c;
}
