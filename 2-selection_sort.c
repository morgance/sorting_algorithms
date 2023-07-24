#include "sort.h"
/**
 * selection_sort - sorts array
 * @array: the array
 * @size: the size
 **/

void selection_sort(int *array, size_t size)
{
	unsigned int i, j, y;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size; i++)
	{
	y = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[y] > array[j])
				y = j;
		}
		if (y != i)
		{
			swap_num(&array[i], &array[y]);
			print_array(array, size);
		}
	}

}
/**
 * swap_num - swap two numbers
 * @fint: first integer
 * @sint: second integer
 **/
void swap_num(int *fint, int *sint)
{
	int dest;

	dest = *fint;
	*fint = *sint;
	*sint = dest;
}
