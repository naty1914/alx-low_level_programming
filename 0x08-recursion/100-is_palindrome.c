#include "main.h"

/**
 * _strlen_recursion - Prints the length of a string
 * @s: string
 * Return: recursion
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * check - palindrome
 * @s: pointer to string
 * @l: position
 * Return:0
 */

int check(char *s, int l)
{
	if (l < 1)
	{
		return (1);
	}

	if (*s == *(s + l))
	{
		return (check(s + 1, l - 2));
	}
	return (0);
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: string
 * Return: recursion
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (check(s, len - 1));
}
