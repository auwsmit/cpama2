/* Write  program that declares the s structure (see Section 21.4) and prints
 * the sizes and offsets of the a, b, and c members. (Use sizeof to find sizes;
 * use offsetof to find offsets.) Have the program print the size of the entire
 * structure as well. From this information determine whether or not the
 * structure has any holes. If it does, describe the location and size of each.
 */
#include <stdio.h>
#include <stddef.h>

struct s {
    int b[2];
    char a;
    float c;
};

int main(void)
{
    struct s test;
    long int a_size = sizeof(test.a),
             a_offset = offsetof(struct s, a),
             b_size = sizeof(test.b),
             b_offset = offsetof(struct s, b),
             c_size = sizeof(test.c),
             c_offset = offsetof(struct s, c),
             test_size = sizeof(test);

    printf("\nstruct s members:\n");
    printf("a: size: %ld, offset: %ld\n", a_size, a_offset);
    printf("b: size: %ld, offset: %ld\n", b_size, b_offset);
    printf("c: size: %ld, offset: %ld\n", c_size, c_offset);
    printf("\nstruct s total size: %ld\n\n", test_size);

    if (a_size < b_offset)
        printf("there is a %ld-byte hole between a and b\n", b_offset - a_size);
    if (b_size + b_offset < c_offset)
        printf("there is a %ld-byte hole between b and c\n",
                c_offset - b_offset - b_size);
    if (c_size + c_offset < test_size)
        printf("there is a %ld-byte hold after c\n",
                test_size - c_size - c_offset);

    return 0;
}
