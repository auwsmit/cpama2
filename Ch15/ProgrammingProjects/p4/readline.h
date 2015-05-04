#ifndef READLINE_H
#define READLINE_H

/***********************************************************
 * read_line: Reads characters from stdin into a string    *
 *            str of maximum length n.                     *
 *                                                         *
 *            Returns how many characters were entered,    *
 *            even if there were more than n.              *
 **********************************************************/
int read_line(char str[], int n);

#endif
