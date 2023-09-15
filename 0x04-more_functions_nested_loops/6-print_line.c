#include "main.h"
/**
*print_line - prints a straight line
*@n: is the number of times the character _ should be printed
*Return: void (returns nothing)
*/

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
