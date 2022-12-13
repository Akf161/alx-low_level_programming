#include "main.h"

/**
 * times_table - entry point
 * Return: 0
 */

void times_table(void)
{
	int i;
	int j;
	int prod;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');

		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');

			prod = i * j;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');
			_putchar((prod % 10) + '0');

		}
		_putchar('\n');
	}
}
