#include "main.h"

/**
 * puts_half - Print the second half of a string and a newline.
 * @str: String to print from.
 */
void puts_half(char *str)
{
	int len = 0;
	int i;

	while (str[len] != '\0')
		len++;

	for (i = len / 2; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
