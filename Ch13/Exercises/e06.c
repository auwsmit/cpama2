/* Write a function named censor that modifies the string by replacing every
 * occurence of foo by xxx. For example, the string "food fool" would become
 * "xxxd xxx1". Make the function as short as possible without sacrificing
 * clarity.
 */
#include <stdio.h>
#include <string.h>

#define BUF 50
#define true 1
#define false 0
typedef int bool;

void censor(char* txt);
void censor2(char* txt, const char* bad);

int main(void)
{
    char input_text[] = "I pity the foo, and I need some food.";
    char input_text2[] = "Fooly cooly";

    censor(input_text);
    censor2(input_text2, "ool");

    printf("\n%s\n%s\n\n", input_text, input_text2);
    return 0;
}

void censor(char* txt)
{
    int i = 0;
    for (; txt[i] != '\0'; i++)
        if (txt[i] == 'f' && txt[i+1] == 'o' && txt[i+1] == 'o')
            txt[i] = txt[i+1] = txt[i+2] = 'x';
}

/* same as censor, but the word to censor can be specified */
void censor2(char* txt, const char* bad)
{
    int i;
    bool match;
    for (; *txt != '\0'; txt++)
    {
        match = true;
        for (i = 0; bad[i] != '\0'; i++)
        {
            if (*(txt + i) != bad[i])
            {
                match = false;
                break;
            }
        }
        if (match == true)
            for (i = 0; bad[i] != '\0'; i++)
                *(txt + i) = 'x';
    }
}
