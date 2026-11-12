#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Finds the first byte in s that is also in accept.
 * @s: String to search.
 * @accept: String containing the bytes to match.
 *
 * Return: Pointer to the first matching byte, or NULL if none is found.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	while (*s != '\0')
	{
		i = 0;
		while (accept[i] != '\0')
		{
			if (*s == accept[i])
				return (s);
			i++;
		}
		s++;
	}

	return (NULL);
}
