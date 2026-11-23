#include "function_pointers.h"

/**
 * print_name - Prints a name using the supplied function.
 * @name: Name to print.
 * @f: Pointer to the function that prints the name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == 0 || f == 0)
		return;

	f(name);
}
