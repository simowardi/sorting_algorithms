#include "sort.h"


/**
 * lomuto_part_scheme - Order array of int according to lomuto partition sheme
 * @array: the array of integers
 * @asize: size of the array.
 * @frst: starting index of the subset to order
 * @lst: ending index of the subset to order
 * Return: final partition index
 */
int lomuto_part_scheme(int *array, size_t asize, int frst, int lst)
{
	int *pivot, x, y, tmp, idx;

	pivot = array + lst;
	for (x = y = frst; x < lst; x++)
	{
		if (array[x] < *pivot)
		{
			if (y < x)
			{
				tmp = *(array + x);
				*(array + x) = *(array + y);
				*(array + x) = tmp;
				print_array(array, asize);
			}
			y++;
		}
	}
	if (array[y] > *pivot)
	{
		idx = *(array + y);
		*(array + y) = *pivot;
		*pivot = idx;
		print_array(array, asize);
	}
	return (y);
}

/**
 * sort - Implement quicksort algorithm through recursion
 * @array: array of integers to sort
 * @asize: size of the array
 * @frst: starting index of the array partition to order
 * @lst: The ending index of the array partition to order
 */
void sort(int *array, size_t asize, int frst, int lst)
{
	int b;

	if (lst > frst)
	{
		b = lomuto_part_scheme(array, asize, frst, lst);
		sort(array, asize, frst, b - 1);
		sort(array, asize, b + 1, lst);
	}
}

/**
 * quick_sort - sorts an array of integers in ascending order
 * @array: array of integers
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	sort(array, size, 0, size - 1);
}
