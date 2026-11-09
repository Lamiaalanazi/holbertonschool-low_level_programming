#include <limits.h>
#include "main.h"

/**
 * _atoi - Convert the first group of digits in a string to an integer.
 * @s: String to scan.
 *
 * Return: The converted integer, or 0 if absent or out of range.
 */
int _atoi(char *s)
{
	int sign = 1;
	int value = 0;
	int digit;
	int limit;

	while (*s != '\0' && (*s < '0' || *s > '9'))
	{
		if (*s == '-')
			sign = -sign;
		s++;
	}

	limit = -INT_MAX;
	if (sign < 0)
		limit = INT_MIN;

	while (*s >= '0' && *s <= '9')
	{
		digit = *s - '0';
		if (value < limit / 10 ||
		    (value == limit / 10 && digit > -(limit % 10)))
			return (0);
		value = value * 10 - digit;
		s++;
	}

	if (sign > 0)
		return (-value);
	return (value);
}
