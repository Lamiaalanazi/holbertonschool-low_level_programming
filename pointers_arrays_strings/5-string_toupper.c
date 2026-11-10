#include "main.h"

/**
 * string_toupper - Convert lowercase letters to uppercase.
 * @str: String to modify.
 *
 * Return: Pointer to the modified string.
 */
char *string_toupper(char *str)
{
	char *current = str;

	while (*current != '\0')
	{
		if (*current >= 'a' && *current <= 'z')
			*current = *current - 'a' + 'A';
		current++;
	}

	return (str);
}
