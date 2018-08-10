#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <stdio.h>
#include <stdlib.h>
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void binary_print(int *array, size_t start, size_t end);
int binary_recursive(int *array, size_t min, size_t max, int value);
#endif
