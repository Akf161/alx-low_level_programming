#include "main.h"

/**
 * rev_string - prints a string in reverse order
 * Return: void
 * @s: the string
 */

void rev_string(char *s)
{
	int count;
	int i;

	count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	for (i = count - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
