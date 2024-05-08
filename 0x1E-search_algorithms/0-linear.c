#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers
 * @array: array to search the value in
 * @size: The size of the array
 * @value: value to look for
 * Return: The first index where value is located  or -1 if not
 */

int linear_search(int *array, size_t size, int value)
{
size_t i;
for (i = 0; i < size; i++)
{
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
}
return (-1);
}
