#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and sets each byte to zero.
 * @nmemb: Number of elements.
 * @size: Size of each element in bytes.
 *
 * Return: Pointer to the allocated memory, or NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t total;
	size_t i;
	unsigned char *buffer;

	if (nmemb == 0 || size == 0)
		return (NULL);

	if (nmemb > (size_t)-1 / size)
		return (NULL);

	total = (size_t)nmemb * size;
	buffer = malloc(total);
	if (buffer == NULL)
		return (NULL);

	for (i = 0; i < total; i++)
		buffer[i] = 0;

	return (buffer);
}
