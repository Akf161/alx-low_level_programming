#include "main.h"

/**
 * _memcpy- fills memory with a constant byte
 * @dest: source string
 * @src: string for filling
 * @n: length of buffer
 * Return: dest
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		*(dest + i) = *(s + i);
		i++;
	}

	return (dest);
}
