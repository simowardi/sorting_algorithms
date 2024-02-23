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
 * bubbleSort - Sorts an array of integers in ascending order
 * @arr: Array of integers to sort
 * @size: Size of the array
 */
void bubbleSort(int *arr, size_t size)
{
	size_t idx = 0, j;
	bool sorted = false;

	if (arr == NULL || size < 2)
		return;

	while (idx < size - 1)
	{
		sorted = true;
		j = 0;
		while (j < size - idx - 1)
		{
			if (arr[j] > arr[j + 1])
			{
				swapIntegers(arr + j, arr + j + 1);
				printArray(arr, size);
				sorted = false;
			}
			j++;
		}
		if (sorted)
			break;
		idx++;
	}
}

