#include "main.h"

/**
 * print_triangle - a function that prints a triangle, followed by a new line.
 * @size: size of the triangle
 *
 * Return: void (returns nothing)
 */
void print_triangle(int size)
{
	int i, j, n;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (n = size - i; n >= 1; n--)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
