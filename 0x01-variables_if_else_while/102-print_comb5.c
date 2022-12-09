#include <stdio.h>

/**
 * main - entry point
 * Return: returns 0
 */

int main(void)
{
	int i;
	int j;
	int x;
	int y;
	int sumij;
	int sumxy;

	for (i = 0 && x = 0; i < 10 && x < 10; i++ && x++)
	{
		for (j = 0 && y = 0; j < 10 && y < 10; j++ && y++)
		{
			if (sumij < sumxy)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i < 9)
					putchar(' ');
				putchar(x + '0');
				putchar(y + '0');
				if (i < 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
