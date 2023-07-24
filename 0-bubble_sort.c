#include "sort.h"

/**
* bubble_sort - sorts array of integers in ascending order
* @array: array to be sorted
* @size:the size of array
* Return:nothing
*/

void bubble_sort(int *array, size_t size)
{
	int x;
	size_t pro, b;

	if (array == NULL || size == 0)
		return;

	for (pro = 0; pro < size; pro++)
	{
		for (b = 0; b < size - 1; b++)
		{
			if (array[b] > array[b + 1])
			{
				x = array[b];
				array[b] = array[b + 1];
				array[b + 1] = x;
				print_array(array, size);
			}
		}
	}
}
