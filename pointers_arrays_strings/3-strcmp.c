#include "main.h"

/**
 * _strcmp - Compare two strings byte by byte.
 * @s1: First string to compare.
 * @s2: Second string to compare.
 *
 * Return: Difference between the first unequal bytes, or 0 if equal.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return ((unsigned char)*s1 - (unsigned char)*s2);
}
