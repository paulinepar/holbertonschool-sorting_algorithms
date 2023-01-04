#include <stdio.h>
/**
 * linear_search - function that searches for a value in an array of integers
 * using the linear search algorithm.
 * @array: array
 * @size: size
 * @value: value
 *
 * Return: value first index
 */
int linear_search(int *array, size_t size, int value)
{
	if (!array)
		return -1;

	for (size_t i = 0; i < size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return i;
	}
	return -1;
}
