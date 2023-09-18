#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that print an array
 * @a: the array to print
 * @n: number of elements of the array to be printed
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
