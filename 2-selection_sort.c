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
 * selection_sort - sorts an array of integer using selection sort
 * @array: array of integer to be sorted
 * @size: length of the array
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min;
	size_t sorted = 0;

	if (array == NULL || size < 2)
	{
		return;
	}
	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
				sorted = 1;
			}
		}
		swaper(&array[min], &array[i]);
		if (sorted)
		{
			print_array(array, size);
			sorted = 0;
		}
	}
}
