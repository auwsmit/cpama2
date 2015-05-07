/* Suppose that the direction variable is declared in the following way:
 *
 * enum {NORTH, SOUTH, EAST, WEST} direction;
 *
 * Let x and y be int variables. Write a switch statement that tests the
 * direction, incrementing x if direction is EAST, decrementing x if direction
 * is WEST, incrementing y if direction is SOUTH, decrementing y if direction is
 * NORTH.
 */
switch (direction)
{
    case NORTH:
        --y;
        break;
    case EAST:
        ++x;
        break;
    case SOUTH:
        ++y;
        break;
    case WEST:
        --x;
        break;
};
