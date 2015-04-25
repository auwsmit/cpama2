/* Suppose that a program needs to display messages in either English, French,
 * or Spanish. Using conditional compilation, write a program fragment that
 * displays one of the following three messages, depending on whether or not the
 * specified macro is defined:
 *
 * Insert Disk 1         (if ENGLISH is defined)
 * Inserez Le Diskque 1  (if FRENCH is defined)
 * Inserte El Disco 1    (if SPANISH is defined)
 */
#include <stdio.h>
#define FRENCH

int main(void)
{
    printf("\n"
#if defined(ENGLISH)
            "Insert Disk 1"
#elif defined(FRENCH)
            "Inserez Le Diskque 1"
#elif defined(SPANISH)
            "Inserte El Disco 1"
#endif
          "\n\n");
    return 0;
}
