/* Modify the program of Programming Project 2 so that
 * it prompts the user for the radius of the sphere.
 */
#include <stdio.h>

#define NUM_PIE 3.141592653f

int main(void)
{
    int radius;

    printf("\nEnter the radius of a sphere: ");
    scanf("%d", &radius);

    printf("The volume of a %d-meter sphere is: %.2f\n\n",
            radius, (4.0f/3.0f) * NUM_PIE * (radius * radius * radius));

    return 0;
}
