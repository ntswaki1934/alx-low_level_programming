#include "search_algos.h"

/**
 * binary_search - searches a value in a sorted array using binary search.
 * @array: pointer to the first element to be searched in an array
 * @size: the number of elements of array.
 * @value: value to search for.
 *
 * Return: If value is not present or array NULL -1,
 * else index where value is located.
 *
 * Description: Prints the [sub]array searched after each change
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}
	return (-1);
}
