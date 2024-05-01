#include "sort.h"

/**
 * quick_sort - sorts an array of integers in ascending order
 * using quick sort algorithm
 * @array: array to be sorted
 * @size: length of array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
	{
		return;
	}
	quick_sort_recursion(array, 0, size - 1, size);
}

/**
 * quick_sort_recursion - sorts a subarray of integers
 * using quick sort algorithm
 * @array: array to be sorted
 * @low: starting index of the subarray
 * @high: ending index of the subarray
 * @size: length of the array
 */
void quick_sort_recursion(int *array, int low, int high, size_t size)
{
	if (low < high)
	{
		int pivot;

		pivot = divide(array, low, high, size);
		quick_sort_recursion(array, low, pivot - 1, size);
		quick_sort_recursion(array, pivot + 1, high, size);
	}
}

/**
 * divide - divides the array into two and returns the pivot index
 * @array: array to be partitioned
 * @low: starting index
 * @high: ending index
 * @size: size of the array
 * Return: pivot index
 */
int divide(int *array, int low, int high, size_t size)
{
	int pivot, i, j;

	pivot = array[high];
	i = low - 1;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] != array[high])
	{
		swap(&array[i + 1], &array[high]);
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * swap - swaps two integers
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

