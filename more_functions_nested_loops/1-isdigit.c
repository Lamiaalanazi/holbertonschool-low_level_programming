#include "main.h"

/**
 * _isdigit - Checks whether a character is a decimal digit
 * @c: The character code to check
 *
 * Return: 1 if c is a digit, otherwise 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
