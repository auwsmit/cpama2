/* Write a function that, when given a string as an argument, searches the
 * following array of structures for a matching command name, then calls the
 * function associated with that name.
 *
 * struct {
 *   char *cmd_name;
 *   void (*cmd_pointer)(void);
 * } file_cmd[] =
 *  {{"new",       new_cmd},
 *   {"open",      open_cmd},
 *   {"close",     close_cmd},
 *   {"close all", close_all_cmd},
 *   {"save",      save_cmd},
 *   {"save as",   save_as_cmd},
 *   {"save all",  save_all_cmd},
 *   {"print",     print_cmd},
 *   {"exit",      exit_cmd},
 *  };
 */
#include <stdio.h>
#include <string.h>

#define NUM ((int)(sizeof(file_cmd) / sizeof(file_cmd[0])))
typedef enum { false, true } bool;

void readline(char *str, int len);
bool call_cmd_from_name(const char *cmd_name);
void new_cmd(void);
void open_cmd(void);
void close_cmd(void);
void close_all_cmd(void);
void save_cmd(void);
void save_as_cmd(void);
void save_all_cmd(void);
void print_cmd(void);
void exit_cmd(void);

struct {
    char *cmd_name;
    void (*cmd_pointer)(void);
} file_cmd[] =
   {{"new",       new_cmd},
    {"open",      open_cmd},
    {"close",     close_cmd},
    {"close all", close_all_cmd},
    {"save",      save_cmd},
    {"save as",   save_as_cmd},
    {"save all",  save_all_cmd},
    {"print",     print_cmd},
    {"exit",      exit_cmd},
   };

int main(void)
{
    char str[9];

    printf("\nEnter a command name: ");
    readline(str, 9);

    if (call_cmd_from_name(str))
        printf("%s command exists!\n\n", str);
    else
        printf("No %s command found\n\n", str);

    return 0;
}

void readline(char str[], int len)
{
    int c, i = 0;
    while ((c = getchar()) != '\n')
        if (i < len)
            str[i++] = c;
    str[i] = '\0';
}

/* Answer: */
bool call_cmd_from_name(const char *cmd_name)
{
    int i;
    for (i = 0; i < NUM; i++)
    {
        if (strcmp(cmd_name, file_cmd[i].cmd_name) == 0)
        {
            (*file_cmd[i].cmd_pointer)();
            return true;
        }
    }
    return false;
}

void new_cmd(void)
{
}

void open_cmd(void)
{
}

void close_cmd(void)
{
}

void close_all_cmd(void)
{
}

void save_cmd(void)
{
}

void save_as_cmd(void)
{
}

void save_all_cmd(void)
{
}

void print_cmd(void)
{
}

void exit_cmd(void)
{
}
