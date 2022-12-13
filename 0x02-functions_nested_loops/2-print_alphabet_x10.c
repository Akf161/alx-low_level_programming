#include "main.h"

/**
 * print_alphabet_x10 - entry point
 * Return: return 0
 * Description: This function print the alphabets from a to z 10 times
 */

void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
