#include "main.c"

/**
 * _strchr - locates a character in a stirng
 * @s: the string
 * @c: the character
 * Return: pointer to the first occurence of the character c in the string
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		s++;

	}

	if (*s == c)
	{
		return (s);
	}

	return (0);
}
