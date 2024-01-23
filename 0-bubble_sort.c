#include "sort.h"
/**
 * bubble_sort - This function is sorting array of ints.
 * @array: Is array of integers.
 * @size: Is the size of the array.
 */
void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t i, j;

	if (!array || !size)
		return;
	i = 0;
	while (i < size)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
		i++;
	}
}
