#include "main.h"

/**
 * _isalpha - Checks whether a character is alphabetic
 * @c: The character to check
 *
 * Return: 1 if a letter, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
