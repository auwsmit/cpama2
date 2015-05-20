#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "line.h"

#define MAX_LINE_LEN 60
#define MAX_WORD_LEN 20

struct node {
    char word[MAX_WORD_LEN];
    struct node *next;
};

struct node *line = NULL; /* pointer to the first word's node */
struct node *last = NULL; /* pointer to the last word's node */
int line_len = 0;
int num_words = 0;

void clear_line(void)
{
    struct node *cur = line, *prev;
    while (cur != NULL) {
        prev = cur;
        cur = cur->next;
        free(prev);
    }
    line = last = NULL;
    line_len = 0;
    num_words = 0;
}

void add_word(const char *word)
{
    struct node *new = malloc(sizeof(struct node));
    strcpy(new->word, word);
    new->next = NULL;

    if (num_words > 0) {
        last->next = new;
        line_len++;
    }
    else
        line = new;

    last = new;
    line_len += strlen(word);
    num_words++;
}

int space_remaining(void)
{
    return MAX_LINE_LEN - line_len;
}

void write_line(void)
{
    int extra_spaces, spaces_to_insert, i;
    struct node *p;

    extra_spaces = MAX_LINE_LEN - line_len;
    for (p = line; p != NULL; p = p->next) {
        printf("%s", p->word);
        if (p->next == NULL) break;
        spaces_to_insert = extra_spaces / (num_words - 1);
        for (i = 1; i <= spaces_to_insert + 1; i++)
            putchar(' ');
        extra_spaces -= spaces_to_insert;
        num_words--;
    }
    putchar('\n');
}

void flush_line(void)
{
    struct node *p;
    for (p = line; p != NULL; p = p->next)
        printf("%s%s", p->word, p->next ? " " : "");
}
