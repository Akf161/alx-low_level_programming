#include "main.h"

/**
 * print_alphabet - entry point
 * Return: return 0
 * Description: This function print the alphabets from a to z
 */

void print_alphabet(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}
