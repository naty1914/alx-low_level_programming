#include "main.h"

/**
 * malloc_checked - cause normal process termination with a status value of 98
 *
 * @b: size of allocated memory
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *check;

	check = malloc(b);
	if (check == NULL)
		exit(98);
	return (check);

}
