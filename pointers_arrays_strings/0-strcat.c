#include "main.h"

/**
 * _strcat - Append one string to another.
 * @dest: Destination with enough space for both strings and the terminator.
 * @src: String to append.
 *
 * Return: Pointer to the beginning of dest.
 */
char *_strcat(char *dest, char *src)
{
	char *end = dest;

	while (*end != '\0')
		end++;

	while (*src != '\0')
	{
		*end = *src;
		end++;
		src++;
	}

	*end = '\0';
	return (dest);
}
