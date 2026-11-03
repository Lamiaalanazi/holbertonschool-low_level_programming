#include "main.h"

/**
 * print_triangle - Prints a right-aligned triangle using #
 * @size: The height and width of the triangle
 */
void print_triangle(int size)
{
	int row;
	int column;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 0; row < size; row++)
	{
		for (column = 0; column < size - row - 1; column++)
			_putchar(' ');
		for (column = 0; column <= row; column++)
			_putchar('#');
		_putchar('\n');
	}
}
