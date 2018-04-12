#ifndef SEARCH
#define SEARCH

#include <stdio.h>
#include <stdlib.h>

/* Function Declarations */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int binary_search_helper(int *array, size_t lo, size_t hi, int value);
#endif
