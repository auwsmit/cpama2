/* Let shape be the structure tag declared in Exercise 13. Write functions that
 * perform the following operations on a shape structure s passed as an
 * argument:
 *
 * (a) Compute the area of s.
 *
 * (b) Move s by x units in the x direction and y units in the y direction,
 *     returning the modified version of s (x and y are additional arguments to
 *     the function.)
 *
 * (c) Scale s by a factor of c (a double value), returning the modified version
 *     of s. (c is an additional argument to the function.)
 */
#define PI 3.1415926535
enum { RECTANGLE, CIRCLE };

struct point { int x, y; };

struct shape {
  int shape_kind;           /* RECTANGLE or CIRCLE */
  struct point center;      /* coordinates of center */
  union {
    struct {
      int height, width;
    } rectangle;
    struct {
      int radius;
    } circle;
  } u;
} s;

/* Answer:
 * A: */
int compute_area(struct shape s)
{
    if (s.shape_kind == RECTANGLE)
        return s.u.rectangle.height * s.u.rectangle.width;
    else /* if shape is CIRCLE */
        return PI * s.u.circle.radius * s.u.circle.radius;
}

/* B: */
struct shape move_shape(struct shape s, int x, int y)
{
    s.center.x += x;
    s.center.y += y;
    return s;
}

/* C: */
struct shape scale_shape(struct shape s, double c)
{
    if (s.shape_kind == RECTANGLE)
    {
        s.u.rectangle.height *= c;
        s.u.rectangle.width *= c;
    }
    else
        s.u.circle.radius *= c;
    return s;
}
