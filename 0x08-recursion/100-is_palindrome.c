#include "main.h"

/**
 * _len - checks the length of a string
 * @s: the string
 * Return: length of the string
 */

int _len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _len(s + 1));
}

/**
 * chkpal - checks if the string is palindrome
 * @i: index
 * @lg: length of string
 * @s: the string
 * Return: 1 if palindrome
 *         0 if not palindrome
 */

int chkpal(int i, int lg, char *s)
{
	if (lg > 0)
	{
		if (s[i] == s[lg])
		{
			return (chkpal(i + 1, lg - 1, s));
		}
		else if (s[i] != s[lg])
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (1);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: is the string
 * Return: 1 if palindrome
 *         0 if not palindrome
 */

int is_palindrome(char *s)
{
	return (chkpal(0, _len(s) - 1, s));
}
