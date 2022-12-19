#include "main.h"

/**
 * puts2 - prints character jumping one
 * Return: void
 * @str: string
 */

void puts2(char *str)
{
	int count;

	count = 0;

	while (str[count] != 0)
	{
		count++;
	}

	for (i = 0; i < count - 1; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
