#include "main.h"

/**
 * _strncpy - Copy up to n bytes and pad with null bytes if needed.
 * @dest: Destination buffer with room for at least n bytes.
 * @src: Source bytes to copy.
 * @n: Number of destination bytes to write.
 *
 * Return: Pointer to the beginning of dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
