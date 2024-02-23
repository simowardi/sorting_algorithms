#include "sort.h"
#include <stdbool.h>

/**
 * swapIntegers - Swap two integers in an array
 * @x: The first integer to swap
 * @y: The second integer to swap
 */
void swapIntegers(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: array of integers to sort
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t n1, n2;
	bool bubblesort = false;

	if (array == NULL || size < 2)
		return;

	for (n1 = 0; n1 < size - 1; n1++)
	{
		bubblesort = true;
		for (n2 = 0; n2 < size - n1 - 1; n2++)
		{
			if (array[n2] > array[n2 + 1])
			{
				swapIntegers(array + n2, array + n2 + 1);
				print_array(array, size);
				bubblesort = false;
			}
		}
		if (bubblesort)
			break;
			}
}
