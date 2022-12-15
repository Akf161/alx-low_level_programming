#include "main.h"

/**
 * print_numbers - prints 0 - 9 except 2 and 4
 * Return: void
 */

void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '2' || i == '4')
			i++;
		_putchar(i);
	}
	_putchar('\n');
}
