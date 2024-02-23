#include "sort.h"

/**
 * swapIntegers - Swap two integers in an array.
 * @x: The first integer to swap.
 * @y: The second integer to swap.
 */
void swapIntegers(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

/**
 * bubbleSort - Sort an array of integers in ascending order.
 * @arr: An array of integers to sort.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void bubbleSort(int *arr, size_t size)
{
	size_t idx, length = size;
	bool sorted = false;

	if (arr == NULL || size < 2)
		return;

	while (sorted == false)
	{
		sorted = true;
		idx = 0;
		while (idx < length - 1)
		{
			if (arr[idx] > arr[idx + 1])
			{
				swapIntegers(arr + idx, arr + idx + 1);
				printArray(arr, size);
				sorted = false;
			}
			idx++;
		}
		length--;
	}
}
