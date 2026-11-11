#include "main.h"

/**
 * _memset - Fills the first n bytes of a memory area.
 * @s: Pointer to the start of the memory area.
 * @b: Byte to write.
 * @n: Number of bytes to fill.
 *
 * Return: Pointer to the start of the memory area.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
