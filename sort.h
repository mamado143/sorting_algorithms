#ifndef _SORTING_H
#define _SORTING_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * struct listint_s - Doubly linked list node.
 * @n: Integer stored in the node.
 * @prev: Pointer to the previous element of the list.
 * @next: Pointer to the next element of the list.
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;
/*Printing helper */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
/**Helper functions**/
void swap(listint_t *a, listint_t *b);
void SWAP(int *array, size_t size, int *a, int *b);
size_t lomuto_partition(int *array, size_t size, ssize_t left, ssize_t right);
/** prototypes of the functions **/
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void fast_sort(int *array, size_t size, ssize_t left, ssize_t right);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
#endif /*_SORTING_H*/
