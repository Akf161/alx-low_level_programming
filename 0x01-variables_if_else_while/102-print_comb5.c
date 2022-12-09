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

	sumij = 0;
	sumxy = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 9; j++)
		{
			for (x = 0; x < 10; x++)
			{
				for (y = 0; y < 10; y++)
				{
					sumij = i + j;
					sumxy = x + y;
					if (sumij > sumxy && (x != 0 && y != 0) && j < 9 && y < 10)
					{
						putchar(i + '0');
						putchar(j + '0');
						putchar(' ');
						putchar(x + '0');
						putchar(y + '0');
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
