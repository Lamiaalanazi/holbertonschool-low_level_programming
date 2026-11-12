#include "main.h"

/**
 * _strspn - Counts leading bytes in s that are in accept.
 * @s: String to scan.
 * @accept: String containing the allowed bytes.
 *
 * Return: Length of the initial segment.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count;
	unsigned int i;

	count = 0;
	while (s[count] != '\0')
	{
		i = 0;
		while (accept[i] != '\0' && accept[i] != s[count])
			i++;

		if (accept[i] == '\0')
			break;

		count++;
	}

	return (count);
}
