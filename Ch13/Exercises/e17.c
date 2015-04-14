/* Write the following function:
 *
 * bool test_extension(const char *file_name, 
 *                     const char *extension);
 *
 * file_name points to a string containing a file name. The function should
 * return true if the file's extension matches the string pointed to by
 * extension, ignoring the case of letters. For example, call
 * test_extension("memo.txt", "TXT") would return true. Incorporate the "search
 * for the end of a string" idiom into your function. Hint: Use the toupper
 * function to convert characters into upper-case before comparing them.
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define false 0
#define true 1
typedef int bool;

bool test_extension(const char *file_name, 
                    const char *extension);

int main(void)
{
    char *fn = "memo.txt", *ext = "TXT";

    printf("\nFile name: %s\nExtension check: %s", fn, ext);
    printf("\nResult: %s\n\n", test_extension(fn, ext) ? "true" : "false");
    return 0;
}

bool test_extension(const char *file_name, 
                    const char *extension)
{
    while (*file_name)
    {
        if (*file_name++ == '.')
        {
            while (*file_name)
                if (toupper(*file_name++) != *extension++)
                    return false;
            return true;
        }
    }
    return false;
}
