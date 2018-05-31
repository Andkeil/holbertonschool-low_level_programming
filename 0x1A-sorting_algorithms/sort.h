#ifndef SORT_H
#define SORT_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct listint_s - Doubly linked list node
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void quickSort(int a[], int l, int h, size_t size);
int partition(int a[], int l, int h, size_t size);
void quick_sort_hoare(int *array, size_t size);
void quickSort_hoare(int a[], size_t l, size_t h, size_t size);
size_t partition_hoare(int a[], size_t l, size_t h, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void build_heap(int *array, size_t size);
void heapify(int *array, size_t size, size_t last, size_t i);
void swap(int *array, size_t size, size_t findex, size_t sindex);
void heap_sorting(int *array, size_t size, size_t last);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void merging(int *a, int low, int mid, int high, int *b);
void sort(int *a, int low, int high, int *b);

#endif
