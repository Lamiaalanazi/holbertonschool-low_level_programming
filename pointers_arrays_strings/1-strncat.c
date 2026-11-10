#include "main.h"

/**
 * _strncat - Append up to n bytes from one string to another.
 * @dest: Destination buffer with enough space for the result.
 * @src: Source bytes to append.
 * @n: Maximum number of bytes to append.
 *
 * Return: Pointer to the beginning of dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *end = dest;
	int i = 0;

	while (*end != '\0')
		end++;

	while (i < n && src[i] != '\0')
	{
		end[i] = src[i];
		i++;
	}

	end[i] = '\0';
	return (dest);
}
