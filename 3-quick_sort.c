#include "sort.h"

#include "sort.h"

/**
 * swaper - swap value between two integers
 * @a: pointer to first int
 * @b: pointer to second int
 * Return: void
 */

void swaper(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * divide_to_subArray - use divide and conquer to cut the array
 * @array: array to divide
 * @low: form
 * @high: to
 * @full_arr: full array for printing
 * @size: soze of full array
 * Retrurn: void
 */

void divide_to_subArray(int array[], int low, int high, int full_arr[],
		size_t size)
{
	if (low < high)
	{
		int pivot = partition(array, low, high, full_arr, size);

		divide_to_subArray(array, low, pivot - 1, full_arr, size);
		divide_to_subArray(array, pivot + 1, high, full_arr, size);
	}
}

/**
 * partition - Lomuto partition scheme
 * @array: array to be partitioned
 * @low: starting index of partition
 * @high: ending index of partition
 * @full_arr: full array for printing
 * @size: size of the full array
 * Return: index of the pivot
 */

int partition(int array[], int low, int high, int full_arr[], size_t size)
{
	int pivot = array[high];
	int i = low - 1;
	int j;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swaper(&array[i], &array[j]);
		}
	}
	swaper(&array[i + 1], &array[high]);
	print_array(full_arr, size);
	return (i + 1);
}


/**
 * quick_sort - the main caller
 * @array: array to be sorted
 * @size: length of array
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
	{
		return;
	}
	divide_to_subArray(array, 0, size - 1, array, size);
}
