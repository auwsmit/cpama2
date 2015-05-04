#ifndef QUICKSORT_H
#define QUICKSORT_H

/***********************************************************
 * quicksort: Sorts an array of integers from lowest to    *
 *            highest.                                     *
 **********************************************************/
void quicksort(int a[], int low, int high);

/***********************************************************
 * split: Returns the median value between positions low   *
 *        and high in array a.                             *
 **********************************************************/
int split(int a[], int low, int high);

#endif
