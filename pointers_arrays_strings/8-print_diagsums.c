#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sums of the diagonals of a square matrix.
 * @a: Pointer to the first element of the matrix.
 * @size: Number of rows and columns.
 */
void print_diagsums(int *a, int size)
{
	int row;
	int main_sum;
	int other_sum;

	main_sum = 0;
	other_sum = 0;

	for (row = 0; row < size; row++)
	{
		main_sum += a[row * size + row];
		other_sum += a[row * size + (size - 1 - row)];
	}

	printf("%d, %d\n", main_sum, other_sum);
}
