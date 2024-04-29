#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: array to to be sorted
 * @size: length of array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i;
	int temp;
	int swap;

	do {
		swap = 0;
		for (i = 1; i < size; i++)
		{
			if (array[i - 1] > array[i])
			{
				temp = array[i];
				array[i] = array[i - 1];
				array[i - 1] = temp;
				swap = 1;
				print_array((const int *)array, size);
			}
		}
	} while (swap);
}
