#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: array to to be sorted
 * @size: length of array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp, swap;

	if (array == NULL || size < 2)
	{
		return;
	}
	for (i = 0; i < size - 1; i++)
	{
		swap = 0;
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array((const int *)array, size);
				swap = 1;
			}
		}
		if (swap == 0)
		{
			break;
		}
	}
}
