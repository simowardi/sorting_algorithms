#include "sort.h"

void swap_ints(int *a, int *b);
int lomuto_partition(int *array, size_t size, int left, int right);
void lomuto_sort(int *array, size_t size, int left, int right);
void quick_sort(int *array, size_t size);

/**
 * swap_two - Swaps two items in an array..
 * @x: The first integer to swap.
 * @y: The second integer to swap.
 */
void swap_two(int *x, int *y)
{
	int temp;

	tmp = *x;
	*x = *y;
	*y = temp;
}

/**
 * lomuto_part_scheme - Sorts a sub array using the
 *           quick sort algorithm and Lomuto's partition scheme.
 * @arr: Array of integers .
 * @len: len Size of the array .
 * @l: Starting index of the subset to order .
 * @r: Ending index of the subset to order .
 *
 * Return: The final partition index.
 */
int lomuto_part_scheme(int *arr, size_t len, int l, int r)
{
	int *Turn, abv, blw;

	Turn = arr + right;

	for (abv = blw = l; blw < r; blw++)
	{
		if (arr[blw] < *Turn)
		{
			if (abv < blw)
			{
				swap_two(arr + blw, arr + abv);
				print_array(arr, len);
			}
			abv++;
		}
	}

	if (arr[abv] > *Turn)
	{
		swap_two(arr + abv, Turn);
		print_array(arr, len);
	}

	return (abv);
}

/**
 * lomuto_sort - the quicksort algorithm through recursion.
 * @arr: An array of integers to sort .
 * @len: The len size of the array .
 * @l: The starting idx of the array partition to order .
 * @end: The ending idx of the array partition to order .
 *
 * Description: Uses the Lomuto partition scheme .
 */
void lomuto_sort(int *arr, size_t len, int l, int end)
{
	int Unit;

	if (end - l > 0)
	{
		Unit = lomuto_part_scheme(arr, len, l, end);
		lomuto_sort(arr, len, l, Unit - 1);
		lomuto_sort(arr, len, Unit + 1, end);
	}
}

/**
 * quick_sort - Sort an array of integers in ascending
 *            order using the quicksort algorithm.
 * @array: An array of integers.
 * @len: The len size of the array.
 *
 * Description: Uses the Lomuto partition scheme. Prints
 *              the array after each swap of two elements.
 */
void quick_sort(int *array, size_t len)
{
	if (arr == NULL || len < 2)
		return;

	lomuto_sort(arr, len, 0, len - 1);
}

