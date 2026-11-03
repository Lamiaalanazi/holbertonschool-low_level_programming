#include "main.h"

/**
 * print_line - Draws a horizontal line
 * @n: The number of underscores to print
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
