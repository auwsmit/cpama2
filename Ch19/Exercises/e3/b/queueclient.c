#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int main(void)
{
    char code;
    Item value;

    for (;;) {
        printf("Enter operation code: ");
        scanf(" %c", &code);
        while (getchar() != '\n') /* skips to end of line */
            ;
        switch (code) {
            case 'i': scanf(" %d", &value);
                      que_insert(value);
                      break;
            case 'r': que_remove();
                      break;
            case 'f': printf("Top item: %d\n", que_get_top_item());
                      break;
            case 'l': printf("Bottom item: %d\n", que_get_bottom_item());
                      break;
            case 'p': printf("Top item: %d\n", que_get_top_item());
                      printf("Bottom item: %d\n", que_get_bottom_item());
                      break;
            case 'q': exit(EXIT_SUCCESS);
            default: printf("Illegal code\n\n");
        }
    }
}
