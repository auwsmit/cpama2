/* Improve the planet.c program of Section 13.7 by having it ignore case when
 * comparing command-line arguments with strings in the planets array.
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define NUM_PLANETS 9

int nocase_strcmp(const char *str1, const char *str2);

int main(int argc, char *argv[])
{
    char *planets[] = {"Mercury", "Venus", "Earth",
                       "Mars", "Jupiter", "Saturn",
                       "Uranus", "Neptune", "Pluto"};
    int i, j;

    putchar('\n');
    for (i = 1; i < argc; i++)
    {
        for (j = 0; j < NUM_PLANETS; j++)
            if (nocase_strcmp(argv[i], planets[j]) == 0)
            {
                printf("%s is planet %d\n", argv[i], j + 1);
                break;
            }
        if (j == NUM_PLANETS)
            printf("%s is not a planet\n", argv[i]);
    }
    putchar('\n');

    return 0;
}

int nocase_strcmp(const char *s, const char *t)
{
    int i;
    for (i = 0; tolower(s[i]) == tolower(t[i]); i++)
        if (s[i] == '\0')
            return 0;
    return s[i] - t[i];

}
