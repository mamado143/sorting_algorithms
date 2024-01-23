#include "sort.h"
/**
 * swap - swaps 2 integers.
 * @array: sorting integers array.
 * @size: The size of the array.
 * @a: First value.
 * @b: Seceond value.
 *
 * Return: returns void.
 */
void SWAP(int *array, size_t size, int *a, int *b)
{
	if (*a != *b)
	{
		*a = *a + *b;
		*b = *a - *b;
		*a = *a - *b;
		print_array((const int *)array, size);
	}
}
/**
 * lomuto_partition - function order a subset of an array of integers according.
 * @array: The array of integers.
 * @size: The size of the array.
 * @left: The starting index.
 * @right: The ending index
 * Return: final partition
 */
size_t lomuto_partition(int *array, size_t size, ssize_t left, ssize_t right)
{
	int i, j, pivot = array[right];

	for (i = j = left; j < right; j++)
		if (array[j] < pivot)
			SWAP(array, size, &array[j], &array[i++]);
	SWAP(array, size, &array[i], &array[right]);
	return (i);
}
/**
 * fast_sort - sorting via partition.
 * @array: An array of ints.
 * @size: The size of the array.
 * @lift: the left index.
 * @right: the right index.
 * * Return: void.
 */
void fast_sort(int *array, size_t size, ssize_t left, ssize_t right)
{
	if (left < right)
	{
		size_t part;

		part = lomuto_partition(array, size, left, right);
		fast_sort(array, size, left, part - 1);
		fast_sort(array, size, part + 1, right);
	}
}
/**
 * quick_sort - sort an array of integers.
 * @array: An array of ints.
 * @size: The size of the array.
 *
 * Return: void.
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	fast_sort(array, size, 0, size - 1);
}
