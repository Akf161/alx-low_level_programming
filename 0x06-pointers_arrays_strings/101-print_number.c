#include "main.h"

/**
 * print_number - prints an integer
 * Return: void
 * @n: the integer
 */

void print_number(int n)
{
	unsigned int m;

	m = n;

	if (n < 0)
	{
		_putchar('-');
		m = -n;
	}

	if ((n / 10) > 0)
	{
		print_number(num / 10);
	}

	_putchar((num % 10) + '0');
}
