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

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(92);
			_putchar('\n');
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
