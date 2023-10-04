#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: intial value
 * Return: pointer of an array of chars , or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *chr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	chr = malloc(sizeof(c) * size);

	if (chr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		chr[i] = c;

	return (chr);
}
