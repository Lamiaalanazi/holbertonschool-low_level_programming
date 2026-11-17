#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min through max.
 * @min: First value in the array.
 * @max: Last value in the array.
 *
 * Return: Pointer to the new array, or NULL on failure.
 */
int *array_range(int min, int max)
{
	unsigned int span;
	size_t count;
	size_t i;
	int *array;

	if (min > max)
		return (NULL);

	span = (unsigned int)max - (unsigned int)min;
	count = (size_t)span + 1;
	if (count == 0 || count > (size_t)-1 / sizeof(*array))
		return (NULL);

	array = malloc(count * sizeof(*array));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < count - 1; i++)
	{
		array[i] = min;
		min++;
	}
	array[count - 1] = max;

	return (array);
}
