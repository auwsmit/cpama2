/* The following structures are designed to store information about objects on
 * a graphics screen:
 *
 * struct point { int x, y; };
 * struct rectangle { struct point upper_left, lower_right; };
 *
 * A point structure stores x and y coordinates of a point on the sreen.
 * A rectangle structure stores the coordinates of the upper left and lower
 * right corners of a rectangle. Write functions that perform the following
 * operations on a rectangle structure r passed as an argument:
 *
 * (a) Compute the area of r.
 *
 * (b) Compute the center of r, returning it as a point value. If either the
 *     x or y coordinate of the center isn't an integer, store its truncated
 *     value in the point structure.
 *
 * (c) Move r by x units in the x direction and y units in the y direction,
 *     returning the modified version of r. (x and y are additional arguments to
 *     the function.)
 *
 * (d) Determine whether a point p lies within r, returning true or false.
 *     (p is an additional argument of type struct point.)
 */
typedef enum { false, true } bool;
struct point { int x, y; };
struct rectangle { struct point upper_left, lower_right; };

/* Answer:
 * A: */
int compute_area(struct rectangle r)
{
    int length = r.upper_left.y  - r.lower_right.y;
    int width  = r.lower_right.x - r.upper_left.x;
    return length * width;
}

/* B: */
struct point find_center(struct rectangle r)
{
    struct point center;
    center.x = r.lower_right.x / 2;
    center.y = r.upper_left.y  / 2;
    return center;
}

/* C: */
struct rectangle move_rect(struct rectangle r, int x, int y)
{
    r.upper_left.x += x;
    r.upper_left.y += y;
    r.lower_right.x += x;
    r.lower_right.y += y;
    return r;
}

/* D: */
bool point_is_in_rect(struct point p, struct rectangle r)
{
    if (p.x > r.upper_left.x && p.x < r.lower_right.x &&
        p.y < r.upper_left.y && p.y > r.lower_right.y)
        return true;
    else return false;
}
