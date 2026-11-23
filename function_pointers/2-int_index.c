#include "function_pointers.h"

/**
 * int_index - Finds the first array element matching a condition.
 * @array: Array of integers.
 * @size: Number of elements in the array.
 * @cmp: Function that returns nonzero for a matching element.
 *
 * Return: Index of the first match, or -1 if no match is found.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == 0 || cmp == 0 || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
