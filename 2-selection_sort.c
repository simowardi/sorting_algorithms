#include "sort.h"

/**
 * selection_sort - A fun that sorts an array of integers in ascending order
 * @array: An array of ints
 * @size: The size of the array
 */
void selection_sort(int *array, size_t size)
{
	int *m, tmp;
	size_t x = 0, y;

	if (array == NULL || size < 2)
		return;

	for (; x < size - 1; x++)
	{
		m = array + x;
		y = x + 1;

		while (y < size)
	{
		m = (array[y] < *m ? (array + y) : m);
		y++;
	}

		if ((array + x) != m)
		{
			tmp = *(array + x);
			*(array + x) = *m;
			*m = tmp;
			print_array(array, size);
		}
	}
}

