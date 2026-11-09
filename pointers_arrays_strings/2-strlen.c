#include "main.h"

/**
 * _strlen - Return the length of a string.
 * @s: String to measure.
 *
 * Return: The number of characters before the null terminator.
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}
