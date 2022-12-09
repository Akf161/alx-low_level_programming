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

	x = 0;
	y = 0;
	sumij = 0;
	sumxy = 0;

	for (i = 0; i < 10; i++)
	{
		x++;
		for (j = 0; j < 10; j++)
		{
			sumij = i + j;
			sumxy = x + y;
			y++;
			if (sumij < sumxy)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (j < 9)
					putchar(' ');
				putchar(x + '0');
				putchar(y + '0');
				if (y < 10)
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
