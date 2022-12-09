#include <stdio.h>

/**
 * main - entry point
 * Return: returns 0
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q' || ch == 'e')
			ch++;
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
