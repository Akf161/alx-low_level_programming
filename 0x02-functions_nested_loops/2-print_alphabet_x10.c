#include "main.h"

/**
 * print_alphabet_x10 - entry point
 * Return: return 0
 * Description: This function print the alphabets from a to z 10 times
 */

void print_alphabet_x10(void)
{
	char c;
	int i;

	c = 'a';
	i = 0;

	while (i < 10)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
	}

	_putchar('\n');
}
