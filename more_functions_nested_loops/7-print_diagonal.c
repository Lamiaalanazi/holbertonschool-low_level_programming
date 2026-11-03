#include "main.h"

/**
 * print_diagonal - Draws a diagonal line in the terminal
 * @n: The number of rows to print
 */
void print_diagonal(int n)
{
	int row;
	int space;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 0; row < n; row++)
	{
		for (space = 0; space < row; space++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
