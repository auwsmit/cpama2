/* Write the following function:
 *
 * void get_extension(const char *file_name, char *extension);
 *
 * file_name points to a string containing a file name. The function should
 * store the extension on the file name in the string pointed to by extension.
 * For example, if the file "memo.txt", the function will store "txt" in the
 * string pointed to by extension. If the file name doesn't have an extension,
 * the function should store an empty string (a string null character) in the
 * string pointed to by extension. Keep the function as simple as possible by
 * having it use the strlen and strcpy functions.
 */
#include <stdio.h>
#include <string.h>

void get_extension(const char *file_name, char *extension);

int main(void)
{
    char input[50], ext[50];

    printf("\nEnter a file name: ");
    scanf("%s", input);
    get_extension(input, ext);
    printf("Extension: %s\n\n", ext);
    return 0;
}

void get_extension(const char *file_name, char *extension)
{
    while (*file_name)
    {
        if (*file_name++ == '.')
        {
            strcpy(extension, file_name);
            return;
        }
    }
    strcpy(extension, "");
}
