#include "sort.h"

/**
 * bubble_sort - sort an array with bubble sort alogrithm
 * @array: array of int
 * @size: size of an array
 * Return: (void) print after each swap
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int swaper;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j + 1])
			{
				if (array[j + 1] < array[j])
				{
					swaper = array[j];
					array[j] = array[j + 1];
					array[j + 1] = swaper;
					print_array(array, size);
				}
			}
		}
	}
}

