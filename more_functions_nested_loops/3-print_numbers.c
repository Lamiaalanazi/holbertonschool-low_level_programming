#include "main.h"

/**
 * print_numbers - Prints the digits from 0 to 9 followed by a newline
 */
void print_numbers(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
		_putchar(digit);

	_putchar('\n');
}
