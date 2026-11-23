#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of its integer arguments.
 * @n: Number of integer arguments.
 *
 * Return: The sum, or 0 if n is 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum;

	sum = 0;
	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);
	return (sum);
}
