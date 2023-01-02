#include "sort.h"

/**
 * bubble_sort - sort array
 * @array : array
 * @size : size of the array
 * Return: Always 0
 */

void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 0;
	int tmp;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < (size - i - 1); j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
