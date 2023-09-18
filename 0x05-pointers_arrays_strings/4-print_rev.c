#include "main.h"

/**
 * print_rev -  a function that prints a string, in reverse
 *
 *@s: the string to print in reverse
 *_strlen -returns the length of a string
 */

void print_rev(char *s)
{
	int i = 0;
	int length;

	for (length = 0; s[length] != '\0'; length++)
	{
	}

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
