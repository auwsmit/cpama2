/* Write the following function:
 *
 * int *create_array(int n, int initial_value);
 *
 * The function should return a pointer to a dynamically allocated int array
 * with n members, each of which is initialized to initial_value. The return
 * value should be NULL if the array can't be allocated.
 */
#include <stdio.h>
#include <stdlib.h>

int *create_array(int n, int initial_value);

int main(void)
{
    int i, *a = create_array(5, 8);
    printf("\nContents of array a: ");

    for (i = 0; i < 5; i++)
        printf("\na[%d]: %d", i, a[i]);
    printf("\n\n");
    return 0;
}

int *create_array(int n, int initial_value)
{
    int *p, *array = malloc(n * sizeof(int));
    if (array == NULL)
        return NULL;
    for (p = array; p < array + n; p++)
    {
        *p = initial_value;
    }
    return array;
}
