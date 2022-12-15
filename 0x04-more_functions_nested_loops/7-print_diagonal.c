#include "main.h"

/**
 * print_diagonal - prints diagonal line
 * @n: number of \
 * Return: void
 */

void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		_putchar('\');
		_putchar('\n');

		if (j < (n - 1))
		{
			for (j = 0; j <= n - 1; j++)
				_putchar(' ');
		}
	}
}
