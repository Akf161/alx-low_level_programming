#include "main.h"

/**
 * more_numbers - print number from 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 14; i++)
	{
		if (i > 9)
			_putchar('1');
		_putchar(i % 10 + '0');
	}
	_putchar('\n');
}
