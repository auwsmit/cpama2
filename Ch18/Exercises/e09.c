/* Use a series of type definitions to symplify each of the following
 * declarations in Exercise 8.
 */
char (*x[10])(int);
typedef char Fcn(int);
typedef Fcn *Fcn_ptr;
typedef Fcn Fcn_ptr_array[10];
Fcn_ptr_array x;

int (*x(int))[5];
typedef int array_of_ints[5];
typedef array_of_ints *Fcn(int);
Fcn x;

float *(*x(void))(int);
typedef float Out_fcn(int);
typedef Out_fcn *In_fcn(int);
Out_fcn x;

void (*x(int, void (*y)(int)))(int);
typedef void Out_fcn(int);
typedef void *Fcn_ptr_arg(int);
typedef Out_fcn *In_fcn(int, Fcn_ptr_arg);
Out_fcn x;
