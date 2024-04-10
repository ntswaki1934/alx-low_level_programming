#include "search_algos.h"

/**
 * linear_search - searches for a value in an array using linear search
 * @array: pointer to the first element of array to be searched
 * @size: the number of elements in the array
 * @value: the value to search for
 * Return: if the value is not present or array is NULL,-1
 * else the index where value is located
 *
 * Description: prints a value whenever it is compared in the array
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("value checked[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
