#include "3-calc.h"

/**
 * main - Performs an arithmetic operation on two integers.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 *
 * Return: 0 on success. Exits with 98, 99, or 100 on errors.
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operation = get_op_func(argv[2]);
	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", operation(a, b));

	return (0);
}
