#include "main.h"

/**
 * _strcpy - Copy a string including its null terminator.
 * @dest: Destination buffer with enough space for the copy.
 * @src: Source string to copy.
 *
 * Return: Pointer to the destination buffer.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
