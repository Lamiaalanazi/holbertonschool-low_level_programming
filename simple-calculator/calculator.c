#include <stdio.h>

/*
 * Simple Calculator
 *
 * Number type: all operands and results are decimals (double).
 * Results are printed with "%.10g", so whole numbers print without
 * a decimal part (35, -15, 42) and others print naturally (2.5).
 * Division by zero prints "Error: division by zero".
 */

/**
 * main - Entry point of the simple calculator
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int choice;
	double a, b;

	printf("Simple Calculator\n");

	while (1)
	{
		printf("1) Add\n");
		printf("2) Subtract\n");
		printf("3) Multiply\n");
		printf("4) Divide\n");
		printf("0) Quit\n");
		printf("Choice: ");

		if (scanf("%d", &choice) != 1)
			return (1);

		if (choice == 0)
		{
			printf("Bye!\n");
			break;
		}

		if (choice < 0 || choice > 4)
		{
			printf("Invalid choice\n");
			continue;
		}

		printf("A: ");
		if (scanf("%lf", &a) != 1)
			return (1);

		printf("B: ");
		if (scanf("%lf", &b) != 1)
			return (1);

		if (choice == 1)
			printf("Result: %.10g\n", a + b);
		else if (choice == 2)
			printf("Result: %.10g\n", a - b);
		else if (choice == 3)
			printf("Result: %.10g\n", a * b);
		else if (choice == 4)
		{
			if (b == 0)
				printf("Error: division by zero\n");
			else
				printf("Result: %.10g\n", a / b);
		}
	}

	return (0);
}
